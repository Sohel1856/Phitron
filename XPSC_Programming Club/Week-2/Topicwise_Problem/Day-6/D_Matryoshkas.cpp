// Date: 10-11-2024 at 10:00 BST
// Link: https://codeforces.com/problemset/problem/1790/D
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        mp[ar[i]]++;
    }
    sort(ar.begin(), ar.end());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int val = ar[i];
        if (mp[ar[i]] != 0)
        {
            ans++;
            while (mp[val] > 0)
            {
                mp[val]--;
                val++;
            }
        }
    }
    cout << ans << endl;
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