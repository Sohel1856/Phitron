#include<stdio.h>
int main()
{
    char a[11],b[11];
    scanf("%s",a);
    scanf("%s",b);
    int len=strlen(a),len1=strlen(b);
   printf("%d %d\n",len,len1);
   printf("%s%s\n",a,b);
    char tmp=a[0];
    a[0]=b[0];
    b[0]=tmp;
    printf("%s %s",a,b);
    return 0;
}
// #include<string.h>

// int main() {
//     char a[11], b[11];
//     scanf("%s", a);
//     scanf("%s", b);
//     int len = strlen(a), len1 = strlen(b);
//     printf("%d %d\n", len, len1);
//     printf("%s%s\n", a, b);
//         char tmp = a[0];
//         a[0] = b[0];
//         b[0] = tmp;
//     printf("%s %s\n", a, b);
//     return 0;
// }