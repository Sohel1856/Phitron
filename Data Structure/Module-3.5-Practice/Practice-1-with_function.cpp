#include<bits/stdc++.h>
using namespace std;
vector<int>fun(vector<int>&v)
{
    int n=v.size();
     vector<int> pre(n);
    pre[0]=v[0];
    for(int i=1;i<n;i++)
    {
        pre[i]=v[i]+pre[i-1];
    }
    return pre;
}
int main()
{
    int n,sum;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int>result=fun(v);
    for(int i=0;i<n;i++)
    {
      cout<<result[i]<<" "; /// prefix sum
    }
   
}