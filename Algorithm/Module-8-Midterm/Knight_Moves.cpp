#include <bits/stdc++.h>
using namespace std;
int dis[101][101];
int vis[101][101];
int N, M;
vector<pair<int, int>> V = {{-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1}};
bool valid(int i, int j)
{
    return !vis[i][j] && i >= 0 && i < N && j >= 0 && j < M;
}
int bfs(pair<int, int> src, pair<int, int> des)
{
    queue<pair<int, int>> Q;
    Q.push(src);
    vis[src.first][src.second] = true;
    dis[src.first][src.second] = 0;
    while (!Q.empty())
    {
        pair<int, int> parent = Q.front();
        Q.pop();
        int Pi = parent.first;
        int Pj = parent.second;
        if (Pi == des.first && Pj == des.second)
        {
            return dis[Pi][Pj];
        }
        for (pair<int, int> parent : V)
        {
            int ci = parent.first + Pi;
            int cj = parent.second + Pj;
            if (valid(ci, cj))
            {
                Q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[Pi][Pj] + 1;
            }
        }
    }
    return -1;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        pair<int, int> p, q;
        cin >> N >> M;
        memset(dis, 0, sizeof(dis));
        memset(vis, 0, sizeof(vis));
        int si, sj, qi, qj;
        cin >> si >> sj >> qi >> qj;
        p = {si, sj};
        q = {qi, qj};
        int ans = bfs(p, q);
        cout << ans << endl;
    }
    return 0;
}