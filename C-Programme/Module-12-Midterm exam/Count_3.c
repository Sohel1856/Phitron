#include<stdio.h>
int main()
{    
    int n;
    scanf("%d",&n);
    char str[10001];
    
for(int i=1;i<=n;i++)
{
    int capital=0,small=0,digits=0;
    scanf("%s",&str);

            for(int i=0;str[i]!='\0';i++)
            {
            if( str[i]>='A'&& str[i]<='Z')
            {
                capital++;

            }
            else if(str[i]>='a'&& str[i]<='z')
            {
                small++;
            }
            else if(str[i]>='0'&& str[i]<='9')
            {
                digits++;
            }
            }
            printf("%d %d %d\n",capital,small,digits);
}
        return 0;
}
// #include<stdio.h>
// int main()
// {    
//     int n;
//     scanf("%d",&n);
//     char str[10001];
    
// for(int i=1;i<=n;i--)
// {
//     int capital=0,small=0,digits=0;
//     scanf("%s",&str);

//             for(int i=0;str[i]!='\0';i++)
//             {
//             if( str[i]>='A'&& str[i]<='Z')
//             {
//                 capital++;

//             }
//             else if(str[i]>='a'&& str[i]<='z')
//             {
//                 small++;
//             }
//             else if(str[i]>='0'&& str[i]<='9')
//             {
//                 digits++;
//             }
//             }
//             printf("%d %d %d\n",capital,small,digits);
// }
//         return 0;
// }


// #include <stdio.h>

// int main() {
//     int n, capital, small, digits;
//     char S[10001];

//     scanf("%d", &n);

//     while (n--) {
//         capital= small = digits = 0;

//         scanf("%s", S);

//         for (int i = 0; S[i] != '\0'; i++) {
//             if (S[i] >= 'A' && S[i] <= 'Z') {
//                 capital++;
//             } else if (S[i] >= 'a' && S[i] <= 'z') {
//                 small++;
//             } else if (S[i] >= '0' && S[i] <= '9') {
//                 digits++;
//             }
//         }

//         printf("%d %d %d\n", capital, small, digits);
//     }

//     return 0;
// }