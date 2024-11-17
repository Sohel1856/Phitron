#include<stdio.h>
int count_before_one(int a[],int n)
{
    
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
           break;
        }
        cnt++;
    }
    return cnt;
}
int main()
{
    int n;
    int cnt=0;
    scanf("%d",&n);
    int a[1000];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int result = count_before_one(a,n);
    printf("%d",result);

    return 0;
}