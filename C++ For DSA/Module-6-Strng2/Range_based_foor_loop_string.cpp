#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    // index + element shoho print korte ei loop
    for(int i=0;i<s.size();i++)
    {
        cout<<i<<" "<<s[i]<<endl;
    }
   cout<<endl;
   // shudu element print korte ei shortcut loop
    for(char c:s)
    {
        cout<<c<<endl;
    }
    return 0;
}