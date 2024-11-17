#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={10,20,30};
    cout<<mylist.size()<<endl; //type->1
    cout<<mylist.max_size()<<endl; //type->2

    mylist.resize(2);//type->3
    cout<<mylist.size()<<endl;
    for(int val:mylist)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    
    mylist.resize(5,100);
    cout<<mylist.size()<<endl;
    for(int val:mylist)
    {
        cout<<val<<" ";
    }
    return 0;
}