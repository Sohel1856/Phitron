#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>v[N];
bool vis[N];
int c=0;
void dfs(int src)
{
    c++;
    vis[src]=true;

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
    int src;
    cin>>src;
    dfs(src);
    cout<<c<<endl;
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// const int N=1e5+5;
// vector<int>v[N]; // adjacency list to store graph
// bool vis[N]; // visited array to mark visited nodes
// int c = 0; // counter for number of nodes visited

// // DFS function to traverse the graph
// void dfs(int src)
// {
//     c++; // increment count of visited nodes
//     vis[src] = true; // mark current node as visited

//     // visit all unvisited neighbors of the current node
//     for(int child : v[src])
//     {
//         if(!vis[child]) // if child node is not visited
//         {
//             dfs(child); // recursively visit child
//         }
//     }
// }

// int main()
// {
//     int n, e; // n = number of nodes, e = number of edges
//     cin >> n >> e;

//     // Read the edges
//     while(e--)
//     {
//         int a, b;
//         cin >> a >> b;
//         v[a].push_back(b);
//         v[b].push_back(a);
//     }

//     int startNode; // node to start DFS from
//     cin >> startNode;

//     // Call DFS starting from node N (startNode)
//     dfs(startNode);

//     // Output the count of visited nodes
//     cout << c << endl;

//     return 0;
// }
