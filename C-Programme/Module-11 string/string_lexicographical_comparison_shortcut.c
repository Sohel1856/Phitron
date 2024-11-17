#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int v=strcmp(a,b);
    if(v<0)
    {
        printf("A is smaller\n");
    }
    else if(v>0)
    {
        printf("B is smaller\n");
    }
    else
    {
        printf("Same\n");
    }
    return 0;
}
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[100],b[100];
//     scanf("%s %s",a,b);   // দুটি স্ট্রিং ইনপুট নিচ্ছি।
//     int v=strcmp(a,b);    // strcmp ফাংশনের মধ্যে ইনপুট নেওয়া দুটি স্ট্রিং দেওয়া হচ্ছে এবং ফাংশন যেই ভেলুটি রিটার্ন করবে তা আলাদা একটি ভেরিয়েবলে স্টোর করছি।
//     if(v<0)              // চেক করে দেখছি ফাংশনের রিটার্ন করা ভেলুটি ০ এর থেকে ছোট কিনা
//     {
//         printf("A is smaller\n");   // যদি ছোট হয় তাহলে প্রথম স্ট্রিংটি ছোট। 
//     }
//     else if(v>0)         // চেক করে দেখছি ফাংশনের রিটার্ন করা ভেলুটি ০ এর থেকে বড় কিনা
//     {
//         printf("B is smaller\n");  // যদি বড় হয় তাহলে দ্বিতীয় স্ট্রিংটি ছোট। 
//     }
//     else         // যদি রিটার্ন করা ভেলুটি ০ হয় 
//     {
//         printf("Same\n");    // তাহলে স্ট্রিং দুটি সেইম।
//     }
//     return 0;
// }