#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    char name[101];
    char section;
    int totalMarks;
};
int main()
{
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t)
    {
        Student s[3];

        for (int i = 0; i < 3; ++i)
        {
            cin >> s[i].id >> s[i].name >> s[i].section >> s[i].totalMarks;
        }

        Student h = s[0];
        for (int i = 1; i < 3; ++i)
        {
            if (s[i].totalMarks > h.totalMarks ||(s[i].totalMarks == h.totalMarks && s[i].id < h.id))
            {
                h = s[i];
            }
        }

        cout << h.id << " " << h.name << " " << h.section << " " << h.totalMarks << std::endl;
    }

    return 0;
}