#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    bool flag = true;
    for (int i = A; i <= B; i++)
    {
        if (i % C == 0)
        {
            cout << i;
            flag = false;
            break;
        }
    }
    if (flag == true)
    {
        cout << -1;
    }

    return 0;
}
