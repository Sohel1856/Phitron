#include<stdio.h>
int main()
{
    int n,D;
    scanf("%d",&n);
    D=6+n/2;
    int l=1;
    int m=D-1;
   for(int i=1;i<=D;i++)
   {
    for(int j=1;j<=m;j++)
    {
        printf(" ");
    }
    for(int j=1;j<=l;j++)
    {
        printf("*");
    }
    m--;
    l=l+2;
    printf("\n");
   }
   for(int i=1;i<=5;i++)
   {
    for(int j=1;j<=5;j++)
    {
        printf(" ");
    }
    for(int j=1;j<=n;j++)
    {
        printf("*");
    }
    printf("\n");
   }
   return 0;
}