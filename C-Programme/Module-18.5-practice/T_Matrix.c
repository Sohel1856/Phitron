#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0,sum1=0;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
            if((i+j)==n-1)
            {
                sum1=sum1+a[i][j];
            }
        }
    }
    int sum2=sum-sum1;
    if(sum2<0)
    {     
        sum2=sum2*(-1);
        printf("%d",sum2);
    }
    else
    {
        printf("%d",sum2);
    }
    return 0;
}