// Date: 09-11-2024 at 23:09 BST
// Link: https://codeforces.com/problemset/problem/1986/C
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    string s, sk;
    cin >> s;
    vector<int> idx(m);
    for (int i = 0; i < m; i++)
        cin >> idx[i];
    cin >> sk;
    sort(sk.begin(), sk.end());
    // operation
    cout << sk << nl;
    map<int, set<char>> mp;
    for (int i = 0; i < m; i++)
        mp[idx[i]].insert(sk[i]);

    for (auto [x, y] : mp)
    {
        cout << x << " " << *(y.begin()) << nl;
        s[x - 1] = *(y.begin());
    }
    cout << s << nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}