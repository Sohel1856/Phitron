// jodi marks 2joner soman hoi tahole roll er wise sajaw
#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
       string name;
       int roll;
       int marks;
};

int main()
{
    int n;
    cin>>n;
    student a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i].marks<a[j].marks) //min/ascending sort
            {
                swap(a[i],a[j]);
            }
            if(a[i].marks==a[j].marks)
            {
                if(a[i].roll>a[j].roll)
                {
                    swap(a[i],a[j]);
                }
            }
        }
    }
     for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    return 0;
}