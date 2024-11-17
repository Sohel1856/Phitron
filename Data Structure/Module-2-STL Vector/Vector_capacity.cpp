#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    // cout<<v.max_size()<<endl; //type-1 maximum capacity

    // cout<<v.capacity()<<endl;   //type-2 capacity
    v.push_back(10);
    // cout<<v.capacity()<<endl;
    v.push_back(20);
    // cout<<v.capacity()<<endl;
    v.push_back(30);
    // cout<<v.capacity()<<endl;
    v.push_back(40);
    // cout<<v.capacity()<<endl;
    v.push_back(50);
    // cout<<v.capacity()<<endl;

    // cout<<v.size()<<endl;
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<< " ";
    // }


    // v.clear(); //type-3 clear eta memory delete kore na kintu size 0 kore de
    // cout<<v.size()<<endl;
    // cout<<v[3];


    //type - 4 ressize
    v.resize(2);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.resize(7,100);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    
    {
        cout<<v[i]<<" ";
    }
    return 0;
}