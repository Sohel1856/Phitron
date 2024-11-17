#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
       string name;
       int age;
       int mark1;
       int mark2;
       Person(string nm,int ag,int m1,int m2)
       {
        name=nm;
        age=ag;
        mark1=m1;
        mark2=m2;
        }
        void hello()
        {
            cout<<name<<" "<<age<<" "<<mark1<<" "<<mark2<<endl;
        }
        int total_marks()
        {
            return mark1+mark2;
        }
};
int main()
{
    Person sohel("sohel",34,99,98);
    sohel.hello();
    cout<<sohel.total_marks()<<endl;
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// class Person
// {
//     public:
//         string name;
//         int age;
//         Person(string nm,int ag)
//         {
//             name=nm;
//             age=ag;
//         }
//         void print()      // ক্লাসের ভেতর একটি ফাংশন নেওয়া হয়েছে। 
//         {
//             cout<<name<< " " <<age<<endl;  // ফাংশনের ভেতর অবজেক্টের নাম এবং বয়স প্রিন্ট করে দেওয়া হচ্ছে। 
//         }
// };
// int main()
// {
//     Person rakib("Rakib Ahsan",24);    // অবজেক্ট ডিক্লেয়ার করা হচ্ছে। 
//     rakib.print();       // অবজেক্টকে ডট দিয়ে যেভাবে ভেরিয়েবল পাওয়া যেত ঠিক তেমনি ফাংশনও পাওয়া যায়। যেহেতু এটি একটি ফাংশন তাই এটিকে কল করতে হয় () দিয়ে। কল করার পর এটি নরমাল ফাংশন এর মতোই কাজ করে। 
//     return 0;
// }