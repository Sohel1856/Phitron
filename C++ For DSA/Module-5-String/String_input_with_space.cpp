#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
   // cin.ignore();  
    getchar();  //string er agge input integer nile tar enter bad er jonno getchar use hoi

    string s;
   // cin>>s;
    //cin.getline(s,100); eta char s[100]; type er data te cin use hoi ,string e kaj kore  na
    getline(cin,s);
    cout<<x<<endl;
    cout<<s<<endl;
    cout<<s.size()<<endl;
    return 0;
}