#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
bool vis[N];
bool pathvisit[N];
vector<int>adj[N];
bool ans;
void dfs(int parent)
{
    vis[parent]=true;
    //cout<<parent<<endl;
    pathvisit[parent]=true;
    for(int child: adj[parent])
    {
        if(pathvisit[child])
        {
            ans=true;
        }
        if(!vis[child])
        {
            dfs(child);
        }
    }
    //kajsesh ekshne
    pathvisit[parent]=false;
}
int main()
{
    int n,e;
    cin>>n>>e;
    while (e--)
    {
       int a,b;
       cin>>a>>b;
       adj[a].push_back(b);
    }
    memset(vis,false,sizeof(vis));
    memset(pathvisit,false,sizeof(pathvisit));
    ans=false;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            dfs(i);
        }
    }
    if(ans) cout<<"Cycle detect";
    else cout<<"Not cycle detect";
    return 0;
}