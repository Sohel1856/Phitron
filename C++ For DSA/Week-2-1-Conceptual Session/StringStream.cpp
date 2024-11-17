#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    // //type 1
    // stringstream ss;
    // ss<<s;   //ekeee
    // string word;
    // ss>>word;
    // cout<<word<<endl;
    // ss>>word;
    // cout<<word<<endl;
    // ss>>word;
    // cout<<word<<endl;


    // type 2

     stringstream ss(s);
     string world;

     while(ss>>world)
     {
        cout<<world<<endl;
     }
    
    return 0;
}