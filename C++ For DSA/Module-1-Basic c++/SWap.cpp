#include<iostream>
#include<algorithm>
#include<algorithm>
using namespace std;

//funcyion diyee

    // void my_swap(int *a,int *b)
    // {
    //     int tmp=*a;
    //     *a=*b;
    //     *b=tmp;

    // }
    // int main()
    // {
    //     int a,b;
    //     cin>>a>>b;
    //     my_swap(&a,&b);
    //     cout<<a<<" "<<b<<endl;
    // }
    int main()
    {
        int a,b;
        cin>>a>>b;
        swap(a,b);
        cout<<a<<" "<<b;
    }
