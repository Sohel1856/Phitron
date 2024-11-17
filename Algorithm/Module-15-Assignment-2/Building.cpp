#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int par[N];
int group_size[N];
void dsu_initialize(int n)
{
        for (int i = 1; i <= n; i++)
        {
            par[i] = -1;
            group_size[i] = 1;
        }
}
int dsu_find(int node)
{
        if (par[node] == -1)
                return node;
        int leader = dsu_find(par[node]);
        par[node] = leader;
        return leader;
}
void dsu_union_by_size(int node1, int node2)
{
        int leaderA = dsu_find(node1);
        int leaderB = dsu_find(node2);
        if (group_size[leaderA] > group_size[leaderB])
        {
            par[leaderB] = leaderA;
            group_size[leaderA] += group_size[leaderB];
        }
        else
        {
            par[leaderA] = leaderB;
            group_size[leaderB] += group_size[leaderA];
        }
}
class Edge
{
public:
        int x, y, z;
        Edge(int x, int y, int z)
        {
                this->x = x;
                this->y = y;
                this->z = z;
        }
};
bool cmp(Edge A, Edge B)
{
        return A.z < B.z;
}
int main()
{
        int n, e;
        cin >> n >> e;
        dsu_initialize(n);
        vector<Edge> edgeList;
        while (e--)
        {
                long long U, V, W;
                cin >> U >> V >> W;
                edgeList.push_back(Edge(U, V, W));
        }
        sort(edgeList.begin(), edgeList.end(), cmp);
        long long cost = 0;
        for (Edge ed : edgeList)
        {
                int lU = dsu_find(ed.x);
                int lV = dsu_find(ed.y);
                if (lU == lV)
                        continue;
                else
                {
                        dsu_union_by_size(ed.x, ed.y);
                        cost += ed.z;
                }
        }

        int real_leader = dsu_find(1);
        bool connected = true;
        for (int i = 1; i <= n; i++)
        {
                if (dsu_find(i) != real_leader)
                        connected = false;
        }
        if (connected)
                cout << cost;
        else
                cout << -1;

        return 0;
}