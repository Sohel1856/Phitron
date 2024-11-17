#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
char A[N][N];
bool vis[N][N];

int n, m;
int Count = 0;
char graph[N][N];

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int X, int Y)
{
        return (X >= 0 && X < n && Y >= 0 && Y < m && graph[X][Y] == '.');
}
vector<int> V;
void dfs(int si, int sj)
{
        vis[si][sj] = true;
        Count++;
        for (int i = 0; i < 4; i++)
        {
                int ci = si + d[i].first;
                int cj = sj + d[i].second;
                if (valid(ci, cj) && !vis[ci][cj])
                {
                        dfs(ci, cj);
                }
        }
}
int main()
{
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
                for (int j = 0; j < m; j++)
                {
                        cin >> graph[i][j];
                }
        }
        for (int i = 0; i < n; i++)
        {
                for (int j = 0; j < m; j++)
                {
                        if (graph[i][j] == '.' && vis[i][j] == false)
                        {
                                dfs(i, j);
                                V.push_back(Count);
                                Count = 0;
                        }
                }
        }
        sort(V.begin(),V.end());
        if(!V.empty())
        cout<<V.front();
        else cout<<-1;
        return 0;
}