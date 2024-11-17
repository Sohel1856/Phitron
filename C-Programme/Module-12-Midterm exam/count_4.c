#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1 ;i--)
    {
        int m1,m2,D;
        scanf("%d %d %d",&m1,&m2,&D);
        int day2=D*m1/(m1+m2);
        int ans=D-day2;
        printf("%d\n",ans);
}

    return 0;
}
