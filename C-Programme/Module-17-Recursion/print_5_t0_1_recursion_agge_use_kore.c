#include<stdio.h>
void fun(int i)
{
    if(i==6) return;
    fun(i+1);    //recursion agge use korai eta reverse value print kore
    printf("%d\n",i);
}
int main()
{
    fun(1);
    return 0;
}