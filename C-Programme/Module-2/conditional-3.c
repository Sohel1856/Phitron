#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk >= 5000)
    {
        printf("cox's bazar jabo\n");
        if(tk >= 10000)
        {
            printf("saint martin jabo\n");
        }
        else{
            printf("ferot ashbo\n");
        }
    }
    else{
        printf("jabo na\n");
    }
    return 0;
}