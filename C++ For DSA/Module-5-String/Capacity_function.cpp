#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="hello world";
    cout<<s.size()<<endl;  //size of the string.
    cout<<s.max_size()<<endl; // maximum size kotu porjonto new jai
    
    //string size baranu jai 
    string a="sljiosjioehgjhsdjkhsdjkfdskjfksdjfjksdhfj";
    cout<<a.capacity()<<endl;
    a="hguierhgeruibgrjvhdjfhdhfsdjhfdjkshfksdhfkjdshfkjhdskjfhdsjkfhjksdhfjksdhfjksdhfjhsdfjkhsdjkghdsjkghjkdfhgjkdfhjkdhfdsjh";
    cout<<a.capacity()<<endl;
    cout<<a.size()<<endl;

    //string clear kora jai
    string b="hello";
    cout<<b<<endl;
    b.clear();
    cout<<b<<endl;
    cout<<b.size()<<endl;

    //string empty hole true na hole false ber kora ajai
    //string c; //empty ashbe 
    string c="hjhgu";//not empty
    c.clear(); //string clear kore
    if(c.empty()==true) cout<<"empty"<<endl;
    else cout<<" not empty"<<endl;

    //size baranu resize kora
    string d;
    cin>>d;
    //  s.resize(5);
    //  s.resize(8,'x');
    //  cout<<s.size()<<endl;
    //  cout<<s<<endl;

    d.resize(5);
    cout<<d<<endl;
    d.resize(11,'x');
    cout<<d<<endl;
    return 0;
}