
#include <stdio.h>
void odd_even()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int ctn = 0, ctn1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] % 2 == 0)
        {
            ctn++;
        }
        else
        {
            ctn1++;
        }
    }
    printf("%d %d", ctn, ctn1);
}
int main()
{
    odd_even();

    return 0;
}