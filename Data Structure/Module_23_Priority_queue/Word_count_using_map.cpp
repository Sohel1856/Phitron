#include<bits/stdc++.h>
using namespace std;
int main()
{
    string Sentence;
    getline(cin,Sentence);
    string word;
    stringstream ss(Sentence);
    map<string,int>mp;
    while(ss>>word)
    {
        mp[word]++;
    }
    // for(auto it=mp.begin();it!=mp.end();it++)
    // {
          // sob gula koibar ashse deka ja
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    cout<<mp["cricket"]<<endl;
    cout<<mp["i"]<<endl;
    return 0;
}