// #include<stdio.h>
// int sum()
// {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int sum=a+b;
//     return sum;
// }
// int main()
// {
//     int s=sum();
//     printf("%d",s);
//     return 0;
// }
#include <stdio.h>
void f2()
{
    printf("f1 ");
}
void f1()
{
    printf("f2 ");
    f2();
}
int main()
{
    printf("Main ");
    f1();
}