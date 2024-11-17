// https://codeforces.com/contest/1974/problem/B

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    cin.ignore();
    string s, k;
    cin >> s;
    set<char> st;
    for (int i = 0; i < n; i++)
        st.insert(s[i]);
    for (auto x : st)
        k.push_back(x);
    map<char, char> mp;
    int i = 0, j = k.size() - 1;
    while (i <= j)
    {
        mp[k[i]] = k[j];
        mp[k[j]] = k[i];
        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
        s[i] = mp[s[i]];

    cout << s << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}