#include <bits/stdc++.h>
using namespace std;
int N, M;
int mat[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> V = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int i, int j)
{
    return !vis[i][j] && mat[i][j] != -1 && i >= 0 && i < N && j >= 0 && j < M;
}
void bfs(pair<int, int> src, pair<int, int> des)
{
    queue<pair<int, int>> Q;
    Q.push(src);
    vis[src.first][src.second] = true;
    bool connected = false;
    while (!Q.empty())
    {
        auto P = Q.front();
        Q.pop();
        int A = P.first;
        int B = P.second;
        if (A == des.first && B == des.second)
        {
            connected = true;
        }
        for (int i = 0; i < V.size(); i++)
        {
            int ci = A + V[i].first;
            int cj = B + V[i].second;
            if (valid(ci, cj))
            {
                Q.push({ci, cj});
                vis[ci][cj] = true;
            }
        }
    }
    if (connected)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    cin >> N >> M;
    pair<int, int> src, des;
    for (int i = 0; i < N; i++)
    {
        string S;
        cin >> S;
        for (int j = 0; j < M; j++)
        {
            if (S[j] == '-')
                mat[i][j] = -1;
        }
    }
    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;
    src = {si, sj};
    des = {di, dj};
    bfs(src, des);
    return 0;
}