// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     queue<int>q;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         int x;
//         cin>>x;
//         q.push(x);
//     }
//     queue<int>q2;
//     int m;
//     cin>>m;
//     for(int i=0;i<m;i++)
//     {
//         int y;
//         cin>>y;
//         q2.push(y);
//     }

//      queue<int>merg_queue;
//       while(!q.empty())
//      {
        
//         int k =q.front();
//         q.pop();
//         merg_queue.push(k);
//         cout<<merg_queue.front()<<" ";
//         merg_queue.pop();

//      }

//      while(!q2.empty())
//      {
        
//         int k =q2.front();
//         q2.pop();
//         merg_queue.push(k);
//         cout<<merg_queue.front()<<" ";
//         merg_queue.pop();

//      }
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q1, q2, merg_queue;
    int n, m, x;

    // Read elements into Queue1
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        q1.push(x);
    }

    // Read elements into Queue2
    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> x;
        q2.push(x);
    }

    // Merge Queue1 into MergedQueue
    while (!q1.empty()) {
        merg_queue.push(q1.front());
        q1.pop();
    }

    // Merge Queue2 into MergedQueue
    while (!q2.empty()) {
        merg_queue.push(q2.front());
        q2.pop();
    }

    // Print elements of MergedQueue
    while (!merg_queue.empty()) {
        cout << merg_queue.front() << " ";
        merg_queue.pop();
    }

    return 0;
}
