#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> v[1005];

long long cost[1005];
void dijkstra(int src)
{
    cost[src] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> PQ;
    PQ.push({0, src});
    while (!PQ.empty())
    {
        pair<int, int> P = PQ.top();
        PQ.pop();
        int P_node = P.second;
        long long P_cost = P.first;
        for (pair<int, int> Par : v[P_node])
        {
            int C_node = Par.first;
            long long C_cost = Par.second;
            if (P_cost + C_cost < cost[C_node])
            {
                cost[C_node] = P_cost + C_cost;
                PQ.push({cost[C_node], C_node});
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
    }
    int src;
    cin >> src;
    for (int i = 1; i <= n; i++)
    {
        cost[i] = INT_MAX;
    }
    dijkstra(src);
    int T;
    cin >> T;
    while (T--)
    {
        int des, dw;
        cin >> des >> dw;
        bool flag = false;
        for (int i = 1; i <= n; i++)
        {
            if (i == des && cost[i] <= dw)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}