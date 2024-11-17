#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string Name;
    int Age;
    int Marks;
};

class compare
{
public:
    bool operator()(Student &A, Student &B)
    {
        if (A.Marks == B.Marks)
        {
            return A.Age > B.Age;
        }
        return A.Marks < B.Marks;
    }
};

int main()
{
    int N;
    cin >> N;
    vector<Student> V(N);
    for (int i = 0; i < N; i++)
    {
        cin >> V[i].Name >> V[i].Age >> V[i].Marks;
    }
    int Q;
    cin >> Q;
    priority_queue<Student, vector<Student>, compare> MaxHeap;

    for (auto i : V)
    {
        MaxHeap.push(i);
    }
    while (Q--)
    {
        int type;
        cin >> type;

        if (type == 0)
        {
            Student S;
            cin >> S.Name >> S.Age >> S.Marks;
            MaxHeap.push(S);
            if (!MaxHeap.empty())
            {
                auto top = MaxHeap.top();
                cout << top.Name << " " << top.Age << " " << top.Marks << endl;
            }
        }
        else if (type == 1)
        {
            if (!MaxHeap.empty())
            {
                auto top = MaxHeap.top();
                cout << top.Name << " " << top.Age << " " << top.Marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (type == 2)
        {
            if (!MaxHeap.empty())
            {
                MaxHeap.pop();
                if (!MaxHeap.empty())
                {
                    auto top = MaxHeap.top();
                    cout << top.Name << " " << top.Age << " " << top.Marks << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}