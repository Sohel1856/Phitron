#include<stdio.h>
void fun(int x)
{
    x=200;
    printf("fun er address-%p\n",&x);
    printf("fun er value-%d\n",x);
}
int main()
{
    int x=10;
    printf("main er address-%p\n",&x);
    fun(x);
     printf("main er value-%d\n",x);
    return 0;
}