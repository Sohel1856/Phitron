// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[20];     
//     gets(a);       
//     printf("%s",a);
//     return 0;
// }
#include<stdio.h>
#include<string.h>  // fgets ব্যাবহার করতে হলেও এই হেডার ফাইলটি ইনক্লুড করতে হয়।
int main()
{
    char a[100];
    fgets(a,20,stdin);   // fgets এর মধ্যে শুরুতে স্ট্রিং এর নাম বলে দিতে হয়, তারপর কত সাইজ ইনপুট নিব সেটার সাইজ দিতে হয় নাল সহ, তারপর stdin এই কিওয়ার্ডটি দিতে হয়।
    // a[20]='\0';
    printf("%s",a);
    return 0;
}