#include <bits/stdc++.h>
using namespace std;

int n, m; 
char a[1005][1005];  
bool vis[1005][1005]; 
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
vector<int> apartment_sizes; 
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
int dfs(int si, int sj) 
{
    int count = 0;
    queue<pair<int, int>> s;
    s.push({si, sj});
    vis[si][sj] = true;
    while (!s.empty()) 
    {
       pair<int,int> par = s.front();
        int a=par.first,b=par.second;
        s.pop();
        count++;
      for (int i = 0; i < 4; i++) 
      {
        int ci = a + d[i].first;
        int cj = b + d[i].second;

            if (valid(ci, cj)) 
            {
                vis[ci][cj] = true;
                s.push({ci, cj});
            }
        }
    }
    
    return count;
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

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            if (a[i][j] == '.' && !vis[i][j]) 
            {
                int room_count = dfs(i, j);  
                apartment_sizes.push_back(room_count);
            }
        }
    }
    sort(apartment_sizes.begin(), apartment_sizes.end());

    if (apartment_sizes.empty()) 
    {
        cout << "0" << endl;
    } 
    else 
    {
        for (const int size : apartment_sizes) 
        {
            cout << size << " ";
        }
        cout << endl;
    }

    return 0;
}
