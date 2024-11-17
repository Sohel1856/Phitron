// Date: 13-11-2024 at 22:16 BST
// Link:
#include <bits/stdc++.h>
using namespace std;
string St(const string &s)
{
    string r;
    for (char c : s)
    {
        r += c;
        if (r.size() >= 2 && r[r.size() - 2] == 'a' && r[r.size() - 1] == 'b')
        {
            r.pop_back();
        }
    }
    return r;
}
void solve()
{
    long long n, m;
    cin >> n >> m;
    string s1, s2;
    cin >> s1 >> s2;
    string a = St(s1);
    string b = St(s2);
    if (a.size() != b.size())
    {
        cout << "NO" << endl;
        return;
    }
    for (int i = 0; i < min(a.size(), b.size()); i++)
    {
        if (a[i] != b[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}