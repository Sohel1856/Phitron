#include <stdio.h>

void p(int a[],int n) 
{
    int min,max;
    max=min=a[0];
    for (int i = 0; i <n; i++) 
    {
        if (a[i]<min)
        {
            min=a[i];
        }
        if (a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d %d",min,max);
}

int main() 
{
    int n;
    scanf("%d", &n);
     int a[n];
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    p(a,n);
    return 0;
}
// #include<stdio.h>
// void solve(int ar[],int n)
// {
//     int min,max;
//     min=max=ar[0];
//     for(int i=0;i<n;i++)
//     {
//         if(ar[i]<min)
//         {
//             min=ar[i];
//         }
//         if(ar[i]>max)
//         {
//             max=ar[i];
//         }
        
//     }
//      printf("%d %d",min,max);
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int ar[n];
//     for(int i=0;i<=n;i++)
//     {
//         scanf("%d",&ar[i]);
//     } 
//     int max,min;
//     solve(ar,n);
   
//     return 0;
// }