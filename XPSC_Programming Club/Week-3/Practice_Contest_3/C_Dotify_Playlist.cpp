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
        int n, k, l;
        cin >> n >> k >> l;
        vector<pair<int, int>> v(n);
        vector<int> list;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first >> v[i].second;
            if (v[i].second == l)
            {
                list.push_back(v[i].first);
            }
        }
        sort(list.begin(), list.end());
        int ans = 0;
        if (list.size() < k)
            cout << -1 << endl;
        else
        {
            while (k--)
            {
                ans += list.back();
                list.pop_back();
            }
            cout << ans << endl;
        }
    }
    return 0;
}