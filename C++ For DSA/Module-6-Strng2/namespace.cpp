#include<bits/stdc++.h>
using namespace std;
namespace rakib
{
    int age=24;
    void hello()
    {
        cout<<"rakib namespace"<<endl;
    }
}
namespace sakib
{
    int age=30;
    void hello()
    {
        cout<<"sakib namespace"<<endl;
    }
}
using namespace rakib;
int main()
{
    cout<<age<<endl;
    hello();
    sakib::hello();
    return 0;
}