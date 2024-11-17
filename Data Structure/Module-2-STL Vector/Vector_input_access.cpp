#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector<int>v;
    int n;
    cin>>n;
    //type 1
    // for(int i=0;i<n;i++)
    // {
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    //   for(int val:v)
    // {
    //     cout<<val<<" ";
    // }
    //type 2
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int val:v)
    {
        cout<<val<< " ";
    }
    return 0;
}