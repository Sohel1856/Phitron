#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int sub=a-b;
    if(a-b>=0)
    {
        printf("%d",sub);
    }
    else if(a-b<0)
    {
        printf("0");
    }
    return 0;
}