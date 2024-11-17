#include<bits/stdc++.h>
using namespace std;
int main()
{
    int* a=new int[2];
    *(a+0)=5;
    *(a+1)=10;
    cout<<*(a+0)<<endl;
    cout<<*(a+1)<<endl;
   
    
    a[0]=5;
    a[1]=10;
    for(int i=0;i<2;i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}