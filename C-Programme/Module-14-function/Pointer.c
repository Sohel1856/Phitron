// #include<stdio.h>
// int main()
// {
//     int x=10;
//     printf("%p\n",&x);
//     int *p=&x;
//     printf("%p\n",p);
//     return 0;
// }

//dereference korsi
#include<stdio.h>
int main()
{
    int x = 10;
    int* p = &x;                 // x এর এড্রেস একটি পয়েন্টার ভেরিয়েবলে রাখা হচ্ছে।
    printf("Value = %d\n",*p);   // পয়েন্টার দিয়ে x এর ভেলু প্রিন্ট করা হচ্ছে।

    *p = 20;                     // পয়েন্টার দিয়ে x এর মান চেঞ্জ করে দেওয়া হচ্ছে।
    printf("Value = %d\n",x);    // পয়েন্টার দিয়ে চেঞ্জ করার পর x কে প্রিন্ট করে দেখা যাচ্ছে x এর মান চেঞ্জ হয়ে গিয়েছে। 
}