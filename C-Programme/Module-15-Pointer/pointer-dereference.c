#include<stdio.h>
int main()
{
    double x = 10;
    double* ptr = &x;
    double* ptr2 = ptr;
    //*ptr=10.20
    *ptr2=100.25; //dereference korsi
    
    printf("x er value: %0.2lf\n",x);    // x দিয়ে x এর ভেলু প্রিন্ট করা হচ্ছে। 
    printf("x er value: %0.2lf\n",*ptr);   // পয়েন্টার দিয়ে x এর ভেলু প্রিন্ট করা হচ্ছে। 
    printf("x er value: %0.2lf\n",*ptr2);   // পয়েন্টার দিয়ে x এর ভেলু প্রিন্ট করা হচ্ছে। 
}