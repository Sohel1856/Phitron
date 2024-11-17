// #include<stdio.h>

// void p(int a)
// {
//     for(int i = 1; i <= a; i++) // Corrected loop condition
//     {
//         printf("%d ", i); // Added a space after each number
//     }
// }

// int main()
// {
//     int a;
//     scanf("%d", &a);
//     p(a);
//     return 0;
// // }
#include <stdio.h>

void p(int n) 
{
    for (int i = 1; i <= n; i++) 
    {
        printf("%d", i);
        if (i < n) 
        {
            printf(" ");
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    p(n);
    return 0;
}
