#include<bits/stdc++.h>
int* fn()
{
    int* b=new int [2];
    b[0]=1;
    b[1]=10;
    return b;
}
using namespace std;
int main()
{
    int* a=fn();
    cout<<a[0]<<" "<<a[1];
    return 0;
}