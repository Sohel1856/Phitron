#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int roll;
    int cls;
    double gpa;
    student(int roll,int cls,double gpa)
    {
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
    }

};
    student *fun()
{
    student* rahim=new student( 30,5,4.33);
    return rahim;
}
int main()
{
    student *ans= fun();
    cout<<ans->roll<<" "<<ans->cls<<" "<<ans->gpa<<endl;
    delete ans;
    return 0;
}