#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int parent[N];
int group_size[N];
void Dsu_initialize(int n)
{
        for (int i = 1; i <= n; i++)
        {
                parent[i] = -1;
                group_size[i] = 1;
        }
}
int Dsu_find(int node)
{
        if (parent[node] == -1)
                return node;
        int leader = Dsu_find(parent[node]);
        parent[node] = leader;
        return leader;
}
void Dsu_union_by_size(int node1, int node2)
{
        int leaderA = Dsu_find(node1);
        int leaderB = Dsu_find(node2);
        if (group_size[leaderA] > group_size[leaderB])
        {
                parent[leaderB] = leaderA;
                group_size[leaderA] += group_size[leaderB];
        }
        else
        {
                parent[leaderA] = leaderB;
                group_size[leaderB] += group_size[leaderA];
        }
}
class Edge
{
public:
        int U, V, W;
        Edge(int U, int V, int W)
        {
                this->U = U;
                this->V = V;
                this->W = W;
        }
};
bool cmp(Edge A, Edge B)
{
        return A.W < B.W;
}
int main()
{
        int n, e;
        cin >> n >> e;
        Dsu_initialize(n);
        vector<Edge> edgeList;
        while (e--)
        {
                long long U, V, W;
                cin >> U >> V >> W;
                edgeList.push_back(Edge(U, V, W));
        }

        sort(edgeList.begin(), edgeList.end(), cmp);
        long long cost = 0;
        int Count = 0;
        for (Edge ed : edgeList)
        {
                int LU = Dsu_find(ed.U);
                int LV = Dsu_find(ed.V);
                if (LU == LV)
                {
                        Count++;
                        continue;
                }
                else
                {
                        Dsu_union_by_size(ed.U, ed.V);
                        cost += ed.W;
                }
        }

        int real_leader = Dsu_find(1);
        bool connected = true;
        for (int i = 1; i <= n; i++)
        {
                if (Dsu_find(i) != real_leader)
                        connected = false;
        }
        if (connected)
                cout << Count << " " << cost;
        else
                cout << "Not Possible";
        return 0;
}