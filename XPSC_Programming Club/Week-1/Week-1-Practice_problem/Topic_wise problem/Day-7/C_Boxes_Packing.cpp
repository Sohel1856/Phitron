// https://codeforces.com/contest/903/problem/C

#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<ll> v(t);
    unordered_map<ll, ll> mp;
    for (int i = 0; i < t; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    ll ans = 0;
    for (auto [x, y] : mp)
    {
        ans = max(ans, y);
    }
    cout << ans;
    return 0;
}