#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    //O(sqrt(N)) complexity type -1
    // for(int i=1;i<=sqrt(n);i++)
    // {
    //     if(n%i==0)
    //     {
    //         cout<<i<<" ";

    //         if(n/i!=0) cout<<n/i<<endl;
    //     }
    // }

    //O(sqrt(N)) complexity type-2
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";

            if(n/i!=0) cout<<n/i<<endl;
        }
    }
    return 0;
}