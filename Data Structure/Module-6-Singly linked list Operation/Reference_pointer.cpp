#include<bits/stdc++.h>
using namespace std;
void fun(int *p)
{
    //p=NULL;
    *p=20;
    cout<<*p<<endl;

}
int main()
{
    int x=10;
    int *ptr=&x;
    fun(ptr);
    cout << *ptr << endl;  
//    cout << &x << endl;  
//    cout << x << endl;   

    return 0;
}