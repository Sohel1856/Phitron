#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
bool vis[N][N];
int DX[4] = {0, 0, -1, 1};
int DY[4] = {1, -1, 0, 0};
map<pair<int, int>, pair<int, int>> par;

int n, m;
char Graph[N][N];

bool valid(int ci, int cj)
{
        return (ci >= 0 && ci < n && cj >= 0 && cj < m);
}

void bfs(int si, int sj)
{
        vis[si][sj] = true;

        queue<pair<int, int>> q;
        q.push({si, sj});

        while (!q.empty())
        {
                pair<int, int> node = q.front();
                q.pop();

                for (int i = 0; i < 4; i++)
                {
                        int ci = node.first + DX[i];
                        int cj = node.second + DY[i];

                        if (valid(ci, cj) && !vis[ci][cj] && Graph[ci][cj] != '#')
                        {
                                vis[ci][cj] = true;
                                q.push({ci, cj});
                                par[{ci, cj}] = {node.first, node.second};
                        }
                }
        }
}

int main()
{
        cin >> n >> m;
        memset(vis, false, sizeof(vis));

        int sx, sy, ex, ey;
        for (int i = 0; i < n; i++)
        {
                for (int j = 0; j < m; j++)
                {
                        cin >> Graph[i][j];
                        if (Graph[i][j] == 'R')
                        {
                                sx = i;
                                sy = j;
                        }
                        else if (Graph[i][j] == 'D')
                        {
                                ex = i;
                                ey = j;
                        }
                }
        }
        bfs(sx, sy);

        if (vis[ex][ey])
        {
                int xi = ex, xj = ey;

                while (!(xi == sx && xj == sy))
                {
                        int newXi = par[{xi, xj}].first;
                        int newXj = par[{xi, xj}].second;

                        xi = newXi;
                        xj = newXj;

                        if (Graph[xi][xj] != 'R' && Graph[xi][xj] != 'D')
                        
                                Graph[xi][xj] = 'X';
                        
                }
        }

        for (int i = 0; i < n; i++)
        {
                for (int j = 0; j < m; j++)
                {
                        cout << Graph[i][j];
                }
                cout << endl;
        }

        return 0;
}