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
    for(int x:mat[4])
    {
        cout<<x<<" ";
    }
    cout<<endl;
    vector<int>v;
    for(int i=0;i<mat[4].size();i++)
    {
        cout<<mat[4][i]<<" ";
    }
    return 0;
}