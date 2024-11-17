#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pair<string, int> student = {"karim", 10};
    auto [name, roll] = student;
    cout << name << " " << roll << endl;

    // int n;
    // cin>>n;
    // pair<string,int>students[n];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>students[i].first>>students[i].second;
    // }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<students[i].first<<" "<<students[i].second<<endl;
    // }
    // for(auto[x,y]:students)
    // {
    //     cout<<x<<" "<<y<<endl;
    // }

    // tuple

    // tuple<string,int,string> t = make_tuple("rahim",10,"017");
    // //cout<<get<0>(t)<<" "<<get<1>(t)<<" "<<get<2>(t)<<'\n';

    // auto[name,roll,num]=t;
    // cout<<name<<" "<<roll<<" "<<num<<'\n';

    // Nested Pair

    // pair<string,pair<int,string>> p ={"rahim",{10,"017"}};
    // string name=p.first;
    // int roll=p.second.first;
    // string phone=p.second.second;
    // cout<<name<<" "<<roll<<" "<<phone<<endl;
    return 0;
}