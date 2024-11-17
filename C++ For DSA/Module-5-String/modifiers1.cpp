#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a="helloworld";
    //majer kunu character delete korte erase use kore
    // a.erase(4,3);
    // cout<<a<<endl;

    // character er majje insert korte replace use kore
    //a.replace(4,3,"sohel");
    // a.replace(4,0,"sohel");
    // cout<<a<<endl;
    
    //inert kora
    a.insert(5,"sohel");
    cout<<a<<endl;
    return 0;
}