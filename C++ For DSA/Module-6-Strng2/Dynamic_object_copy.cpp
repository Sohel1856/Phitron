#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
         string name;
         int age;
         int mark;
         person(string name,int age,int mark)
         {
            this->name=name;
            this->age=age;
            this->mark=mark;
         }
};
int main()
{
    person* rakib=new person("rakib",24,89);
    person* sakib=new person("sakib",24,89);
    //explain kore
    // rakib->name=sakib->name;
    // rakib->age=sakib->age;
    // rakib->mark=rakib->mark;
    // delete sakib;

    //shortcut
    *rakib=*sakib;
    delete sakib;
    cout<<rakib->name<<" "<<rakib->age<<" "<<rakib->mark<<endl;
    return 0;
}