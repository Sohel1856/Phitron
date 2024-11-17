#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int tk=(x-y)/2;
    int rina=tk+y;
    printf(" %d",rina);
    int mina=rina-y;
    printf(" %d",mina);
    return 0;
}