// Date: 15-11-2024 at 11:36 BST
// Link:https://codeforces.com/problemset/problem/1791/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int l = 0, r = n - 1;
        int ans = n;
        while (l < r)
        {
            if (s[l] == s[r])
            {
                break;
            }
            else
            {
                ans -= 2;
                l++, r--;
            }
        }
        cout << ans << endl;
    }

    return 0;
}