#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>v[N];
bool vis[N];
int component_size;
void dfs(int src)
{
    vis[src]=true;
    component_size++;
    for(int child:v[src])
    {
        if(vis[child]==false)
        {
            dfs(child);
        }
    }

}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);

    }
    vector<int>components;
    for(int i=0;i<n;i++)
    {
        if(vis[i]==false)
        {
           component_size=0;
            dfs(i);
            components.push_back(component_size);
        }
        
    }
    sort(components.begin(), components.end());
    for(int size:components)
    {
        cout<<size<<" ";
    }
    cout<<endl;
   
    return 0;
}