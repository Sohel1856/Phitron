#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    // cin>>s;
    getline(cin,s);

    //descending string
    int ln=s.length();
    for(int i=0;i<=ln;i++)
    {
        cout<<s[ln-i];
    }

     //ascending sort
     sort(s.begin(),s.end());
     cout<<s<<endl;
      
    //descending sort
    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;
    return 0;
}