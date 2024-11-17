#include<bits/stdc++.h>
using namespace std;

vector<int> v[1005]; // Adjacency list for the graph
bool vis[1005]; // Visited array for BFS
int level[1005]; // Distance from source

// BFS function to calculate shortest path from source node 0
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0; // Source node level is 0
    
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        
        for (int child : v[par]) // Traverse all neighbors
        {
            if (!vis[child]) // If not visited
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1; // Level of child is parent level + 1
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e; // Number of nodes and edges
    
    // Input graph edges
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    
    int lvl;
    cin >> lvl; // Input the level to find nodes at
    
    memset(vis, false, sizeof(vis)); // Reset visited array
    memset(level, -1, sizeof(level)); // Reset level array
    
    bfs(0); // Perform BFS from source node 0
    
    vector<int> nodes_at_level;
    
    // Collect nodes that are at the specified level
    for (int i = 0; i < n; i++)
    {
        if (level[i] == lvl)
        {
            nodes_at_level.push_back(i);
        }
    }
    
    if (nodes_at_level.empty()) 
    {
        // If no nodes are found at this level, print an empty line
        cout << endl;
    } 
    else 
    {  // Sort the nodes in descending order
        sort(nodes_at_level.begin(), nodes_at_level.end(),greater<int>());
    
        // Print the nodes at level L in descending order
        for (int node : nodes_at_level)
        {
            cout << node << " ";
        }
        cout << endl;
    }
    
    return 0;
}
