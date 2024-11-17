#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={10,20,30,40};
    list<int>newlist;
    //newlist=mylist;     //type 1->shortcut e copy
    newlist.assign(mylist.begin(),mylist.end());
    for(int val:newlist)
    {
        cout<<val<<" ";
    }
    cout<<endl;


    //type->2,3,4,5(push_back,push_front,pop_back,pop_front)
    list<int>mylist1={10,20,30};
    mylist1.push_front(100);
    mylist1.push_back(200);
    for(int val:mylist1)
    {
        cout<<val<<" ";
    }
    cout<<endl;


    mylist1.pop_back(); //200 delete
    mylist1.pop_front();//100 delete
    for(int val:mylist1)
    {
        cout<<val<<" ";
    }
    cout<<endl<<endl;



   // type->6-insert
    list<int>mylist2={1,2,3,4,5,6,7};
    //list<int>newlist1={100,200,300,400,500};
    //mylist2.insert(next(mylist2.begin(),4),100);          //100 delete
   // mylist2.insert(next(mylist2.begin(),4),{100,200,300});   //ek er odik value insert kora jai       //100 delete
    //mylist2.insert(next(mylist2.begin(),5),newlist1.begin(),newlist1.end());   //ekta list er sathe arekta list insert kora jai
    vector<int>v={10,20,30,40};  //vector theke o insert hoi
    mylist2.insert(next(mylist2.begin(),5),v.begin(),v.end());
    for(int val:mylist2)
    {
        cout<<val<<" ";
    }
    cout<<endl;


    //type->7-erase ba delete

   // mylist2.erase(next(mylist2.begin(),5));          //100 delete
    mylist2.erase(next(mylist2.begin(),2),next(mylist2.begin(),5));   
    for(int val:mylist2)
    {
        cout<<val<<" ";
    }
    cout<<endl<<endl;



    // type->7-replace

    list<int>mylist3={1,2,3,2,5,2,7};
    replace(mylist3.begin(),mylist3.end(),2,100);

    for(int val:mylist3)
    {
        cout<<val<<" ";
    }
    cout<<endl<<endl;

    //type->8 find value
     list<int>mylist4={1,2,3,2,5,2,7};
    auto it=find(mylist4.begin(),mylist4.end(),209);
    //cout<<*it<<endl;
    if(it==mylist4.end())
    {
        cout<<"Not Found";
    }
    else
    {
        cout<<"Find";
    }
    return 0;
}