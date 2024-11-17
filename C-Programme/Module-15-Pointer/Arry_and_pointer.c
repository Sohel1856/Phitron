#include<stdio.h>
int main()
{
    int ar[5] = {10,20,30,40,50};       // ৫ সাইজের একটি এরে ডিক্লেয়ার করা হয়েছে। 
    // printf("0th index er address : %p\n",&ar[0]);   // ০ তম ইন্ডেক্সের এড্রেস প্রিন্ট করা হচ্ছে।
    // printf("0th index er address : %p\n",ar);    // ০ তম ইন্ডেক্সের এড্রেস প্রিন্ট করা হচ্ছে।
    // printf("0th index er value : %d\n",ar[0]);    // ০ তম ইন্ডেক্সের এড্রেস প্রিন্ট করা হচ্ছে।
    // printf("0th index er value : %d\n",ar[0]);    // ০ তম ইন্ডেক্সের এড্রেস প্রিন্ট করা হচ্ছে।
    // printf("0th index er value : %d\n",*ar);
    printf("1st index er value : %d\n",ar[1]);
    printf("1st index er value : %d\n",*(ar+1));
    printf("%d\n",ar[1]);
    printf("%d\n",1[ar]);
    printf("%d\n",*(1+ar));
    printf("%d\n",*(ar+1));
    // ar[1]=*(ar+1)
    // *(1+ar)=ar[1]
    // 1[ar]=*(1+ar)
    //*(ar+1)=*(1+ar)
    //ar[1]=1[ar]
    // sob gula e 1st index ke indicate kore
}