#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int count_a = 0, count_b = 0;
        for (char c : s)
        {
            if (c == 'a')
            {
                count_a++;
            }
            else if (c == 'b')
            {
                count_b++;
            }
        }
        if ((count_a == count_b) && (count_a % 2 == 0))
        {
            cout << (count_a + count_b) << endl;
        }
        else if (count_a > count_b)
        {
            cout << count_a << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
}
