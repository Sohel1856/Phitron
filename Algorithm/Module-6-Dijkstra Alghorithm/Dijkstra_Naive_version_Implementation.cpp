#include<bits/stdc++.h>
using namespace std;
const int N=1000;
vector<pair<int,int>>V[N];
int dis[N];
void dijkstra(int src)
{
    queue<pair<int,int>>q;
    q.push({src,0});
    dis[src]=0;
    while(!q.empty())
    {
        pair<int,int> parent = q.front();
        q.pop();
        int node =parent.first;
        int cost= parent.second;
        // for(int i=0;i<V[node].size();i++)
        // {
        //     pair<int,int> child= V[node][i];
        // }
        for(pair<int,int> child: V[node])
        {
            int childNode= child.first;
            int childCost=child.second;
            if(cost + childCost < dis[childNode])
            {
                //path relax
                dis[childNode]= cost + childCost;
                q.push({childNode,dis[childNode]});
                //q.push({childNode,cost+childCost});
            }
        }

    }

}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        V[a].push_back({b,c});
        V[b].push_back({a,c});
    }
    //memset(dis,INT_MAX,dis[N]); garbage dei
    for(int i=0;i<n;i++)
    {
        dis[i]=INT_MAX;
    }
    dijkstra(0);
    for(int i=0;i<n;i++)
    {
        cout<<i<<" -> "<<dis[i]<<endl;
    }
    return 0;
}