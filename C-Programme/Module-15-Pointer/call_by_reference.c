#include<stdio.h>
void fun(int *p)
{
    // printf("p er adress-%p\n",p);
    // printf("x er value-%d\n",*p);
     *p=200;
    //  printf("p er value-%d\n",*p);
}
int main()
{
    int x=10;
    // printf("x er address-%p\n",&x);
    fun(&x);
     printf("x er value-%d\n",x);
    return 0;
}