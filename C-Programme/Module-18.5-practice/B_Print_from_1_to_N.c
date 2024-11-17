#include<stdio.h>
void p(int n,int i)
{
    if(i==n+1) return;
    printf("%d\n",i);
    p(n,i+1);
}
int main()
{
    int n;
    scanf("%d",&n);
    p(n,1);

    return 0;
}