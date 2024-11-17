#include <iostream>
#include <list>
using namespace std;

int main()
{
    int Q;
    cin >> Q;

    list<int>MyList;

    while (Q--)
    {
        int X, val;
        cin >> X >> val;

        if (X == 0)
        {
            MyList.push_front(val);
        }
        else if (X == 1)
        {
            MyList.push_back(val);
        }
        else if (X == 2)
        {
            if (val < MyList.size())
            {
                auto it = MyList.begin();
                for (int i = 0; i < val; ++i)
                {
                    ++it;
                }
                MyList.erase(it);
            }
        }

        if (MyList.empty())
        {
            cout << "L -> " << endl;
            cout << "R -> " << endl;
        }
        else
        {

            cout << "L -> ";
            for (auto it : MyList)
            {
                cout << it << " ";
            }
            cout << endl;

            cout << "R -> ";
            for (auto it = MyList.rbegin(); it != MyList.rend(); ++it)
            {
                cout << *it << " ";
            }
            cout << endl;
        }
    }

    return 0;
}