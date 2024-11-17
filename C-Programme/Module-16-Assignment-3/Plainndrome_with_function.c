#include <stdio.h>
#include <string.h>
int is_palindrome(char str[1001])
{   
    int length = strlen(str);
    int i, j;
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
            return 0;
    }
    return 1;
}

int main()
{
    char str[1001];
    scanf("%s", str);

    if (is_palindrome(str))
    {
    
        printf("Palindrome\n");
    }
    else
    {

        printf("Not Palindrome\n");
    }    

    return 0;
}