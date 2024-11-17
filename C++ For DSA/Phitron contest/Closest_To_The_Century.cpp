#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int s;
        cin>>s;
        int a[s];
        for(int i=0;i<s;i++)
        {
            cin>>a[i];
        }
        int mx=INT_MIN;
        for(int i=0;i<s;i++)
        {
            if(mx<a[i])
            {
                mx=a[i];
            }
        }
        cout<<mx<<endl;

    }
    return 0;
}