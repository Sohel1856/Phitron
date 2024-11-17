#include<bits/stdc++.h>
using namespace std;
int main()
{
    //type->1-declare list
    list<int>mylist1;
    cout<<mylist1.size();
    cout<<endl;

    //type->2-declare list size
    list<int>mylist2(5);
    cout<<mylist2.size();
    cout<<endl;

    //type->3-initalize value in list and size

    //list<int>mylist(5,100);
    list<int>mylist={100,200,300,400};
    for(auto it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    //ei shortcut for loop e amra use korbo 
    for(int val:mylist)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    //Type->4 - copy to another list
    list<int>mylist3(4,9);
    list<int>mylist4(mylist3);
    for(int val:mylist4)
    {
        cout<<val<<" ";
    }

    cout<<endl;
    //Type->5 - copy list from array
    int array[5]={1,2,3,4,5};
    list<int>mylist5(array,array+5);
    for(int val:mylist5)
    {
        cout<<val<<" ";
    }

     cout<<endl;
    //vector theke o copy koera jave
    vector<int>v={6,7,8,9,10};
    list<int>mylist6(v.begin(),v.end());
    for(int val:mylist6)
    {
        cout<<val<<" ";
    }

    return 0;
}