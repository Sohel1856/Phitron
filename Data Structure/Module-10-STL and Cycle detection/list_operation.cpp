#include<bits/stdc++.h>
using namespace std;
int main()
{
    //type->1-Remove value
    list<int>mylist={10,20,10,30,10,40,10,50};
    mylist.remove(10);
    for(int val:mylist)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    //type->2-Sort
    mylist.sort(); //ascending
    //mylist.sort(greater<int>()); //descending
    for(int val:mylist)
    {
        cout<<val<<" ";
    }
    cout<<endl<<endl;

    //type->3-unique korte  sort thaka lagbe
    list<int>mylist1={20,40,30,10,10,50,10,10,60};
    //mylist1.sort();
    mylist1.sort(greater<int>());
    mylist1.unique();
    for(int val:mylist1)
    {
        cout<<val<<" ";
    }
    cout<<endl<<endl;

    //type-4-reverse
    list<int>mylist2={20,40,30,10,10,50,10,10,60};
    mylist2.reverse();
    for(int val:mylist2)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}