#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    long long int m,a,b,c;
    scanf("%lld %lld %lld %lld",&m,&a,&b,&c);
    long long int e=m/(a*b*c);
    // printf("%d\n",e);
    if(m==(a*b*c*e))
    {
        printf("%lld\n",e);
    }
    else
    {
        printf("-1\n");
    }
    }
    return 0;
}