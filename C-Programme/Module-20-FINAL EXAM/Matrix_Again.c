#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int x=r-1;
    scanf("%d",&x);
    for(int i=0;i<c;i++)
    {
        printf("%d ",a[x][i]);
    }
    printf("\n");
    int y=c-1;
    scanf("%d",&y);
    for(int j=0;j<r;j++)
    {
        printf("%d ",a[j][y]);
    }
     return 0;
}