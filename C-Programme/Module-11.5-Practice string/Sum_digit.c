#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
     int sum = 0;
    for(int i = 0; i < n; i++)
    {   char digit;
        scanf(" %c",&digit);
        sum += digit-'0';
    }
    printf("%d\n", sum);
    return 0;
}
// #include<stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int sum = 0;
//     for(int i = 0; i < n; i++)
//     {   
//         char digit;
//         scanf(" %c", &digit); // add a space before %c to skip whitespace characters
//         sum += digit - '0';
//     }
//     printf("%d\n", sum);
//     return 0;
// }
// #include<stdio.h>

// int main() {
//     int N;
//     scanf("%d", &N);
    
//     int sum = 0;
//     for(int i = 0; i < N; i++) {
//         char digit;
//         scanf(" %c", &digit); // Note the space before %c to skip newline characters
//         sum += digit - '0'; // Convert char to int by subtracting ASCII value of '0'
//     }
    
//     printf("%d\n", sum);
    
//     return 0;
// }