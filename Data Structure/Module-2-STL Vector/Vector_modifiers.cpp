#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int>x={10,20,30};
    // vector<int>v={1,2,3};
    // v=x; // O(1)
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    cout<<endl;
    vector<int>x={10,20,30,40,50};
    vector<int>v={1,2,3};
    v=x; // O(n)
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}