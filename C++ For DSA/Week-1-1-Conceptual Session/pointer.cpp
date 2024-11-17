#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p=5;
    int* p1=&p;
    cout<<&p<<endl;
    cout<<p1<<endl;
    cout<<*p1<<endl;
    cout<<&p1<<endl;
    cout<<endl;

    int** p2=&p1; //pointer of a pointer of a variable
    cout<<&p1<<endl;
    cout<<p2<<endl;
    cout<<*p2<<endl;
    cout<<**p2<<endl;
    return 0;
}