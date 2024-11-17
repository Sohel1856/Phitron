#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<int> mat[n];
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int a;
        cin>>a;
        if (mat[a].size() == 0) 
        {
            cout << "-1\n";
        }
        else 
        {
        
            vector<int> v = mat[a];
            sort(v.begin(), v.end(), greater<int>());
            for (int node : v) 
            {
                cout << node << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, e;
//     cin >> n >> e;

//     // Adjacency list to store undirected edges
//     vector<vector<int>> mat(n);

//     // Input the edges
//     while (e--) {
//         int a, b;
//         cin >> a >> b;
//         mat[a].push_back(b);
//         mat[b].push_back(a);  // Since the graph is undirected
//     }

//     // Input number of queries
//     int q;
//     cin >> q;

//     // Handle each query
//     while (q--) {
//         int a;
//         cin >> a;

//         if (mat[a].size() == 0) {
//             // If no nodes are connected, print -1
//             cout << "-1\n";
//         } else {
//             // Sort the connected nodes in descending order
//             vector<int> v = mat[a];
//             sort(v.begin(), v.end(), greater<int>());

//             // Print the connected nodes
//             for (int node : v) {
//                 cout << node << " ";
//             }
//             cout << endl;
//         }
//     }

//     return 0;
// }
