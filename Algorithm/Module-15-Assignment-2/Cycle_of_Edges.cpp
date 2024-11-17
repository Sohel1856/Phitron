#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
int parent[N];
void dsu_initialize(int n)
{
        for (int i = 1; i <= n; i++)
        {
                parent[i] = -1;
        }
}
int dsf_find(int node)
{
        if (parent[node] == -1)
                return node;
        int leader = dsf_find(parent[node]);
        parent[node] = leader;
        return leader;
}
void dsu_union(int L1, int L2)
{
        if (L1 != L2)
                parent[L1] = L2;
}
int main()
{
        int n, e;
        cin >> n >> e;
        dsu_initialize(n);
        int Edge_count = 0;
        while (e--)
        {
                int a, b;
                cin >> a >> b;
                int L1 = dsf_find(a);
                int L2 = dsf_find(b);
                if (L1 == L2)
                        Edge_count++;
                else
                        dsu_union(L1, L2);
        }
        cout << Edge_count;
        return 0;
}