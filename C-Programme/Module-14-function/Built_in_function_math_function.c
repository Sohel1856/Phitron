#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    printf("%llf\n", ceil(3.2));   // প্রিন্ট করলে ৩.২ এর সিলিং ভেলু ৪ আসবে।
    printf("%llf\n", floor(3.6));  // প্রিন্ট করলে ৩.৬ এর ফ্লোর ভেলু ৩ আসবে।
    printf("%llf\n", round(3.5));  // প্রিন্ট করলে ৩.৫ এর রাউন্ড ভেলু ৪ আসবে।
    printf("%llf\n", sqrt(25));    // প্রিন্ট করলে ২৫ এর স্কয়ার রুট ভেলু ৫ আসবে।
    printf("%llf\n", pow(4,2));    // প্রিন্ট করলে ৪^2 এর ভেলু ১৬ আসবে।
    printf("%d\n",abs(-7));        // প্রিন্ট করলে -৭ এর এবসুলেট ভেলু ৭ আসবে।
}