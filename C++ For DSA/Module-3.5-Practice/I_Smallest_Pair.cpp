#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
    int a;
    cin>>a;
    int ar[a];
    for(int i=0;i<a;i++)
    {
        cin>>ar[i];
    }
    int mn=INT_MAX;
    for(int i=0;i<a-1;i++)
    {
        for(int j=i+1;j<a;j++)
        {
             int val=ar[i]+ar[j]+j-i; 
             mn=min(mn,val);

        }
    }
    cout<<mn<<endl;
    }
    return 0;
}