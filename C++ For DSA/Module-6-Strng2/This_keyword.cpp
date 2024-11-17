#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
        string name;
        int age;
        person(string name,int age)
        {
            this->name=name;
            this->age=age;
        }
        //function diya o print kora jai
        
        // void data()
        // {
        //     cout<<name<<" "<<age<<endl;
        // }
};
int main()
{
    person sohel("sohel",34);
    cout<<sohel.name<<" "<<sohel.age<<endl;
    //sohel.data();  //function call
    return 0;
}