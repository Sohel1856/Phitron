// #include<stdio.h>
// int main()
// {
//    // char a[5]={'S','o','h','e','l'};

//    char a[5]="Sohel";   //eta e char initialize
//     for(int i=0;i<5;i++)
//     {
//         printf("%c\n",a[i]);
//     }
//     return 0;
// }

//loop chara initilize kora jai charr ARRY TE ..eta e char er power direct print kora jai
#include<stdio.h>
int main()
{
    char a[6]="Sohel" ;
    int sz=sizeof(a)/sizeof(char);
    printf("%d\n",sz);
    printf("%s",a);
    return 0;
}