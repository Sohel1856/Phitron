#include<stdio.h>
//Function syntex
// return_type name (parameter);
// {
//     _code
//     return what?
// }
int  sum (int x,int y)//x=10 y=20
{
    int sum=x+y;
    return sum;
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",sum(a,b));
    // printf("%d\n",sum(10,20));
    // printf("%d\n",sum(60,40));
    return 0;
}