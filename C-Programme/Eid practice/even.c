#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int firsteven=(n-20)/5;
    printf("%d",firsteven);
    int secondeven=firsteven+2;
    printf(" %d",secondeven);
    int thirdeven=secondeven+2;
    printf(" %d",thirdeven);
    int fourtheven=thirdeven+2;
    printf(" %d",fourtheven);
    int fiftheven=fourtheven+2;
    printf(" %d",fiftheven);

    return 0;
}
