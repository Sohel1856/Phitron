#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001];

    scanf("%s", str);
    int length = strlen(str);
    int i, j;
    int flag = 1;
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
            flag = 0;
    }

    if (flag)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
