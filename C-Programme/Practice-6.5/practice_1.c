#include<stdio.h>
int main()
{
char a;
scanf("%c",&a);
if(a>= 97 && a<122)
{
    printf("%c",a+1);
}
else if (a==122)
{
    printf("%c",97);
}
return 0;
}