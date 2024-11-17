#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int mn=0,mx=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>a[mx])
        {
            mx=i;
        }
        else if (a[i] < a[mn])
        {
            mn=i;
        }
        
    }
    int temp=a[mn];
    a[mn]=a[mx];
    a[mx]=temp;
   //printf("%d %d\n",mx,mn);
    
    for(int i=0;i<n;i++)
    {

        printf("%d ",a[i]);
    }
    return 0;
}

