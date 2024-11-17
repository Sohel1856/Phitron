#include<stdio.h>
int main()
{
    char a[1000001];
    scanf("%s",a);
    for (int i=0;a[i]!='\0';i++)
    {
        if(a[i]==',')
        {
            a[i]=' ';
        }
       else if(a[i]>='A'&& a[i]<='Z')
        {   
            a[i]+=32;
        }
        else if(a[i]>='a'&& a[i]<='z')
        {
            a[i]-= 32;
    
        }
    }
    printf("%s",a);
    return 0;
}