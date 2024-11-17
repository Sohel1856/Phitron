#include<stdio.h>
int main()
{
    int tk;
    scanf("%d\n",&tk);
    if(tk>1000)
    {
        printf("I will buy Punjabi\n");
        if(tk>=1500)
        {
            printf("I will buy new shoes\n");
            printf("Alisha will buy new shoes\n");
        }
    
    }
    else{
            printf("Bad Luck\n");
        }
        return 0;
}