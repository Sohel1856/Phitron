#include<bits/stdc++.h>
using namespace std;
int main()
{
    //valu insert hoise
    // vector<int>v={1,2,4,5,6};
    // v.insert(v.begin()+2,3);
    // for(int x:v)
    // {
    //     cout<<x<<" ";
    // }

    // full vector insert hobe
    vector<int>v={1,2,4,5,6};
    vector<int>v2={10,20,30};
    v.insert(v.begin()+2,v2.begin(),v2.end());
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}