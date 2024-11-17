#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
       string nm;
       int cls;
       char s;
       int id;
       int math_marks;
       int eng_marks;
       int total_marks;
        
        void total_marks1()
          {
             total_marks=math_marks+eng_marks;
          }
};

int main()
{
    int n;
    cin>>n;
    student a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id>>a[i].math_marks>>a[i].eng_marks;
        a[i].total_marks1();
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i].total_marks<a[j].total_marks) 
            {
                swap(a[i],a[j]);
            }
            else if(a[i].total_marks==a[j].total_marks)
            {
                if(a[i].id>a[j].id)
                {
                    swap(a[i],a[j]);
                }
            }
        }
    }
     for(int i=0;i<n;i++)
    {
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s <<" "<<a[i].id <<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// class student {
// public:
//     string nm;
//     int cls;
//     char s;
//     int id;
//     int math_marks;
//     int eng_marks;
//     int total_marks;

//     void calculate_total_marks() 
//     {
//         total_marks = math_marks + eng_marks;
//     }
// };

// int main() {
//     int n;
//     cin >> n;
//     student a[n];

//     for(int i = 0; i < n; i++)
//      {
//         cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;

//         a[i].calculate_total_marks();
//     }
    
//     for(int i = 0; i < n; i++) {
//         for(int j = i + 1; j < n; j++) {
//             if (a[i].total_marks < a[j].total_marks) 
//             {
//                 swap(a[i], a[j]);
//             } 
//             else if (a[i].total_marks == a[j].total_marks)
//              {
//                 if (a[i].id > a[j].id) 
//                 {
//                     swap(a[i], a[j]);
//                 }
//             }
//         }
//     }

//     for(int i = 0; i < n; i++) 
//     {
//         cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
//     }
    
//     return 0;
// }
