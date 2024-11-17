#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    // if(a>b)
    // cout<<a;
    // else
    //  cout<<b;


    // //jodi 2 ta vluer modde boro chutu hoi
    // int c=min(a,b);
    // int d=max(a,b);
    // cout<<c<<" "<<d;

    int mn=min({a,b,c,d});
    int mx=max({a,b,c,d});
    cout<<mn<<" "<<mx;

}