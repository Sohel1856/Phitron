#include<stdio.h>
int main()
{
    const int a=5; //constant value 
    int * b=&a;
    *b =0; //but b ke dereferencre kore a er value 0 banaia dise
    printf("%d",a);
    return 0;
}