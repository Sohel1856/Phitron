/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,max=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a>max)
        {
         max=a;
        }
    }
    printf("%d",max);
    return 0;
}*/
//ek sathe minimum maximum
#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,max=INT_MIN,min=INT_MAX;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a>max)
        {
         max=a;
        }
        if(a<min)
        {
            min=a;
        }
    }
    printf("%d\n%d",max,min);
    return 0;
}