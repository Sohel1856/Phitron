#include<stdio.h>
void p(int n,int i)
{
    if(i==(n+1)) return;
    printf("I love Recursion\n");
    p(n,i+1);
}
int main()
{
    int n;
    scanf("%d",&n);
    p(n,1);
    return 0;
}