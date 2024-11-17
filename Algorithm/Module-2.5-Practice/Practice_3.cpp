#include<bits/stdc++.h>
using namespace std;

vector<int> v[1005]; // Adjacency list for the graph

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
    
    int N;
    cin >> N; // Input the node N for which we need to find the direct connections
    
    // Print the number of directly connected nodes to node N
    cout << v[N].size() << endl;
    
    return 0;
}
