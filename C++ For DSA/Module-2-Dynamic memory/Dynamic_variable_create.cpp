#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a= new int;
    *a=100;
    cout<<a<<endl;  //address print kore
    cout<<*a<<endl; //value print kore
    float *f= new float;
    *f=193.345;
    cout<<*f<<endl;
    return 0;
}