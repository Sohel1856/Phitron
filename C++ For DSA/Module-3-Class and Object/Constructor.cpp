#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int roll;
    int cls;
    double gpa;
    // student (int r,int c,double g)
    // {
    //     roll=r;
    //     cls=c;
    //     gpa=g;
    // }

    //alada variable na nile  eivabe korte hoi
    student (int roll,int cls,double gpa)
    {
        // (*this).roll=roll;
        // (*this).cls=cls;
        // (*this).gpa=gpa;
 
        //short cut this er 
        
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
    }
};
int main()
{
    student rahim(34,5,5.01);
    student karim(3,5,4.33);
    cout<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.gpa<<endl;
    cout<<karim.roll<<" "<<karim.cls<<" "<<karim.gpa<<endl;
    return 0;
}