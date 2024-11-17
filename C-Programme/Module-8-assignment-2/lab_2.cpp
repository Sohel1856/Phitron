#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3]={8,7,6};
    int x=sizeof(a);
    int b[2]={1,2};
    
    cout<<x<<endl;
    int R[3][2];
     cout<<"{";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(a[i] > b[j])
            {
                R[i][j]=1;
               
                cout<<"("<<a[i]<<","<<b[j]<<")";
              
            }
            else
            {
                R[i][j]=0;
            }
        }
    }
      cout<<"}";
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<2;j++)
    //     {
    //         if(a[i] > b[j])
    //         {
    //             cout<<"["<<"("<<a[i]<<","<<b[j]<<")"<<"]";
    //         }
    //     }
    // }
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<R[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}