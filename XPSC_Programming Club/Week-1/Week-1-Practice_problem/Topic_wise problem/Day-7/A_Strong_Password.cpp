// https://codeforces.com/problemset/problem/1997/A
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        ll n = s.size();
        bool flag = true;
        for (ll i = 0; i < n - 1; i++)
        {
            cout << s[i];
            if (s[i] == s[i + 1] && flag)
            {
                cout << (s[i] == 'a' ? "b" : "a");
                flag = false;
            }
        }
        cout << s[n - 1];
        if (flag)
            cout << (s[n - 1] == 'a' ? "b" : "a");
        cout << nl;
    }
}