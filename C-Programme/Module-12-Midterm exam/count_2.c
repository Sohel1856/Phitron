#include<stdio.h>
int main()
{
    char str[100001],ch;
    scanf("%s",&str);
    int count1=0,vowel;
   char  *P=str;
        while(*P!='\0')
        {
            if( *P=='a'||*P=='e'||*P=='i'||*P=='o'||*P=='u')
            {
                vowel++;

            }
            else if(*P>='a'&& *P<='z')
            {
                count1++;
            }
           *P++;
        }
        printf("%d",count1);
        return 0;
}

