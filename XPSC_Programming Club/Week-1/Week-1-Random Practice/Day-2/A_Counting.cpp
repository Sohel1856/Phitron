#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    int num = b - a + 1;
    if (a > b)
    {
        cout << 0;
    }
    else
    {
        cout << num;
    }

    return 0;
}