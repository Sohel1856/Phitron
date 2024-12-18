#include<string.h>
int main()
{
    char s[10000001];
    scanf("%s",s);         // স্ট্রিং ইনপুট নেওয়া হচ্ছে 
    int cnt[26]={0};       // কাউন্টিং এরে নেওয়া হচ্ছে ২৬ সাইজের। যেহেতু a থেকে z ২৬টি ক্যারেক্টার এবং শুরুতে ০ দিয়ে ইনিশিয়াল করা হচ্ছে। 
    for(int i=0;i<strlen(s);i++)   // স্ট্রিং এর উপর লুপ চালানো হচ্ছে
    {
        int value = s[i]-'a';     // স্ট্রিং এর ক্যারেক্টার থেকে ৯৭ অথবা a এর আসকি ভেলু বিয়োগ করা হচ্ছে এটা বের করার জন্য যে কোন ক্যারেক্টার এর কাউন্টিং ভেলু কোন ইন্ডেক্সে স্টোর হবে।  
        cnt[value]++;             // অই ইন্ডেক্স এর ভেলু ১ বাড়িয়ে দেওয়া হচ্ছে। 
    }
    for(int i=0;i<strlen(s);i++)
    {
        int value=s[i]-97;
        if(cnt[value]!=0)         // যদি কাউন্টিং ভেলু ০ না হয় তারমানে অই ক্যারেক্টার টি মিনিমাম একবার হলেও আছে স্ট্রিং এর মধ্যে
        {
            printf("%c : %d\n",value+'a',cnt[value]);  // তাহলে শুরুতে ক্যারেক্টারটি প্রিন্ট হচ্ছে তারপর কতবার আছে সেটি প্রিন্ট হচ্ছে।
        }
        cnt[value]=0;     // একটি ক্যারেক্টার এর কাউন্টিং ভেলু আমরা একবারই প্রিন্ট করব তাই একবার প্রিন্ট হওয়ার পর আমরা কাউন্টিং ভেলু কে ০ করে দিচ্ছি যাতে এই সেইম ক্যারেক্টার পরবর্তীতে আর প্রিন্ট না হয়।
    }
    return 0;
}