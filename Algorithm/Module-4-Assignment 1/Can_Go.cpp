#include<bits/stdc++.h>
using namespace std;

int n, m;
char a[1000][1000];
bool vis[1000][1000];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i, int j) 
{
    if (i < 0 || i >= n || j < 0 || j >= m) 
    {
        return false; 
    }
    if (a[i][j] == '#' || vis[i][j]) 
    {
        return false; 
    }
    return true; 
}

bool dfs(int si, int sj) 
{
    vis[si][sj] = true;
    if (a[si][sj] == 'B') 
    {
        return true; 
    }
    for (int i = 0; i < 4; i++) 
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if (valid(ci, cj)) 
        {
            if (dfs(ci, cj)) 
            {
                return true; 
            }
        }
    }

    return false;
}

int main() 
{
    cin >> n >> m;

    int start_i = -1, start_j = -1; 
    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cin >> a[i][j];
            if (a[i][j] == 'A') 
            {
                start_i = i;
                start_j = j;
            }
        }
    }
    if (dfs(start_i, start_j)) 
    {
        cout << "YES" << endl; 
    } 
    else 
    {
        cout << "NO" << endl; 
    }

    return 0;
}
