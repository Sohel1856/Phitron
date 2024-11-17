// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[100];
//     scanf("%s",a);    // স্ট্রিং ইনপুট নিচ্ছি
//     int count = 0;    // কাউন্ট করার জন্য একটি ভেরিয়েবল নিয়ে তাতে ইনিশিয়ালি ০ রেখে দেওয়া হচ্ছে
//     for(int i=0;a[i]!='\0';i++)  // স্ট্রিং এর শুরু থেকে শেষ পর্যন্ত লুপ চালানো হচ্ছে।
//     {
//         count++;   // প্রতিবার কাউন্ট এর মান ১ করে বাড়ানো হচ্ছে। 
//     }
//     printf("%d\n",count);
//     return 0;
// }


#include<stdio.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int count=0;
    int i=0;
    while(a[i]!='\0')
    {
        count++;
        i++;
    }
    printf("%d",count);
    return 0;
}

//Strlen diya shohoje length ber kora jai
// #include<stdio.h>
// int main()
// {
//     char a[100];
//     scanf("%s",a);
//     int st=strlen(a);
//     printf("%d\n",st);
//     return 0;
// }