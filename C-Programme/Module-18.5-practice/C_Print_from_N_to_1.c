#include<stdio.h>
void p(int n)
{
    if(n==0) return ;
    if(n==1)
    printf("%d",n);
    else
    printf("%d ",n);
    p(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    p(n);
    return 0;
}