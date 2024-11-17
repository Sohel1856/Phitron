// https://codeforces.com/problemset/problem/1722/B
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
        string s, s2;
        cin >> s >> s2;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'G')
                s[i] = 'B';
            if (s2[i] == 'G')
                s2[i] = 'B';
        }
        if (s2 == s)
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