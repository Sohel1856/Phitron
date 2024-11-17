#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int firstodd=(n-12)/4;
    printf("%d",firstodd);
    int secondodd=firstodd+2;
    printf(" %d",secondodd);
    int thirdodd=secondodd+2;
    printf(" %d",thirdodd);
    int fourthodd=thirdodd+2;
    printf(" %d",fourthodd);
    return 0;
}
