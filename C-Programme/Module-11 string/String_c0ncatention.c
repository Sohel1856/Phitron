// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[200],b[100];
//     scanf("%s %s",a,b);
//     int k=strlen(a);
//     for(int i=0;i<=strlen(b);i++) 
//     {
//         a[k]=b[i];
//         k++;
//     }
//     printf("%s %s",a,b);
//     return 0;
// }

//strcat function use kore shohoje  concatnation ber kora jai
//এবার আমরা এই কনকেট করার কাজটি একটি বিল্ট-ইন ফাংশন ব্যাবহার করে করব। 
//ফাংশনটি হলো strcat()। এই ফাংশনে দুটি স্ট্রিং দেওয়া হয়, সে দ্বিতীয় স্ট্রিংটি প্রথম স্ট্রিং এর শেষে এড করে দেয়। 
#include<stdio.h>
#include<string.h>
int main()
{
    char a[200],b[100];
    scanf("%s %s",a,b);
    strcat(a,b);       // প্রথম স্ট্রিং এর শেষে দ্বিতীয় স্ট্রিং পুরোটা এড হয়ে যাবে।
    printf("%s %s",a,b);
    return 0;
}
