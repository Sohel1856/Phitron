#include<stdio.h>
int main()
{
    int row,column;
    scanf("%d %d",&row,&column);
    int a[row][column];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
    // int e=2;
    int e;
    scanf("%d",&e);
     //exact row
        // for(int i=0;i<column;i++)
        // {
        //     // printf("%d ",a[2][i]);
        //      printf("%d ",a[e][i]);
        // }


     //exact column
        for(int i=0;i<row;i++)
        {
            printf("%d \n",a[i][e]);
        }
    return 0;
}