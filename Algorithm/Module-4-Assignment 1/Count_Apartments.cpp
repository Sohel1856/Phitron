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
void dfs(int si, int sj) 
{
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++) 
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj)) 
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
            cin >> a[i][j];
        }
    }
    memset(vis,false,sizeof(vis));
    int apartment_count = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            if (a[i][j] == '.' && !vis[i][j]) 
            {
                dfs(i, j);
                apartment_count++;
            }
        }
    }
    cout << apartment_count << endl;

    return 0;
}
