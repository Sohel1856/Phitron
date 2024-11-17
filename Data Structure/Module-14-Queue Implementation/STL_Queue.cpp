#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }

     while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    queue<int>q2;
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int y;
        cin>>y;
        q2.push(y);
    }

    while (!q2.empty())
    {
        cout<<q2.front()<<" ";
        q2.pop();
    }
    
    
    return 0;
}