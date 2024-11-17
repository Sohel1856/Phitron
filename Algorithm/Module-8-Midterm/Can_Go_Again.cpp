#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    long long u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
vector<Edge> edgelist;
const long long N = 1e18;
long long cost[1005];
int main()
{
    long long n, e;
    cin >> n >> e;
    while (e--)
    {
        long long u, v, w;
        cin >> u >> v >> w;
        edgelist.push_back(Edge(u, v, w));
    }
    long long S;
    cin >> S;
    for (int i = 1; i <= n; i++)
    {
        cost[i] = N;
    }
    cost[S] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (Edge ed : edgelist)
        {
            long long node1 = ed.u;
            long long node2 = ed.v;
            long long cst = ed.w;
            if (cost[node1] < N && cost[node1] + cst < cost[node2])
            {
                cost[node2] = cost[node1] + cst;
            }
        }
    }
    bool cycle = false;
    for (Edge ed : edgelist)
    {
        long long node1 = ed.u;
        long long node2 = ed.v;
        long long cst = ed.w;
        if (cost[node1] < N && cost[node1] + cst < cost[node2])
        {
            cycle = true;
        }
    }

    if (cycle)
        cout << "Negative Cycle Detected" << endl;
    else
    {
        long long T;
        cin >> T;
        while (T--)
        {
            long long des;
            cin >> des;
            if (cost[des] < N)
            {
                cout << cost[des] << endl;
            }
            else
                cout << "Not Possible" << endl;
        }
    }
    return 0;
}