// Date: 13-11-2024 at 21:08 BST
// Link:https://www.codechef.com/START160D/problems/ORANGES
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
        int a, b;
        cin >> a >> b;
        int s1 = a * 10;
        int s2 = a * 11;
        int s3 = a * 12;
        if (b >= s1 && b <= s3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}