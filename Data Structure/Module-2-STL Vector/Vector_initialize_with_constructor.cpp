#include<bits/stdc++.h>
using namespace std;
int main()
{
    // constructor diya vector initialize korse

    
    //vector<int>v; //type 1

    //vector<int>v(5); //type 2

    //vector<int>v(5,10); //type 3

    // vector<int>v(5,100); //tyep 4
    // vector<int>v1(v);

    int ar[5]={1,2,3,4,5}; // type 5
    vector<int>v(ar,ar+5);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    
    return 0;
}