// #include<stdio.h>
// int main()
// {
//     int x = 10;
//     int* p = &x;     // এখানে আমরা একটি পয়েন্টার ভেরিয়েবল ডিক্লেয়ার করেছি যা int ভেরিয়েবল x কে পয়েন্ট করছে অর্থাৎ x এর এড্রেসকে স্টোর করছে। 
//     printf("x er address = %p\n",&x);   // x এর এড্রেস প্রিন্ট করা হচ্ছে। 
//     printf("p er value = %p\n",p);      // পয়েন্টার ভেরিয়েবল এর ভেলু প্রিন্ট করা হচ্ছে। 
// }
#include<stdio.h>
int main()
{
    int x = 10;
    int* p = &x;
    *p=100; //dereference korsi
    
    printf("x er value: %d\n",x);    // x দিয়ে x এর ভেলু প্রিন্ট করা হচ্ছে। 
    printf("x er value: %d\n",*p);   // পয়েন্টার দিয়ে x এর ভেলু প্রিন্ট করা হচ্ছে। 
}