#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    mp["sakib"]=100;//O(logN)
    mp["rakib"]=90;
    mp["akib"]=80;
    mp.insert({"nakib",120});
    //cout<<mp["sakib"]<<endl; ekjon ekjon kore value dekte
    if(mp.count("sakib")) //count use kore buja jai kunu value ase nki nai
    // {
    //     cout<<"Ase"<<endl;
    // }
    // else{
    //     cout<<"Nai"<<endl;
    // }

    //ek sathe sob value dekte 
    for(auto it = mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;//o{logN}
    }
    return 0;
}