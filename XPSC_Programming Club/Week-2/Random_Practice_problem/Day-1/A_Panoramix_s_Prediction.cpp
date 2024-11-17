#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    int cnt = 0, cnt1 = 0;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            cnt++;
        }
    }

    for (int j = 1; j <= b; j++)
    {
        if (b % j == 0)
        {
            cnt1++;
        }
    }
    if (cnt <= 2 && cnt1 <= 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}