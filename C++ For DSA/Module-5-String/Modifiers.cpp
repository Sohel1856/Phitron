#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a="hello";
    string b="world";
    // a+=b; //2ta word jug kore
    // a.append(b);
    // cout<< a<<endl;
    // cout<<b<<endl;


    // // a="hello"; ->work
    // // a=a+b; //b='a';  ->work
    // // a[5]='a';  ->did not work
    a.push_back('a'); //last e chaRacter add kore
    cout<<a<<endl;
     a.pop_back();
     a.pop_back(); //delete korte use
     cout<<a<<endl;
    return 0;
}