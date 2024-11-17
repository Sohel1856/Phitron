#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
       string name;
       int cls;
       char s;
       int id;
};

int main()
{
    int n;
    cin>>n;
    student a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].name>>a[i].cls>>a[i].s>>a[i].id;
    }
  int i=0,j=n-1;
  while(i<j)
  {
        int tmp=a[i].s;
        a[i].s=a[j].s;
        a[j].s=tmp;
        i++;
        j--;

  }
    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// class student {
// public:
//     string name;
//     int cls;
//     char s;
//     int id;
// };

// int main() {
//     int n;
//     cin >> n;
//     student a[n];
//     for (int i = 0; i < n; i++) 
//     {
//         cin >> a[i].name >> a[i].cls >> a[i].s >> a[i].id;
//     }
//     for (int i = 0; i < n / 2; i++) 
//     {
//         swap(a[i].s, a[n - i - 1].s);
//     }

//     for (int i = 0; i < n; i++) 
//     {
//         cout << a[i].name << " " << a[i].cls << " " << a[i].s << " " << a[i].id << endl;
//     }

//     return 0;
// }
