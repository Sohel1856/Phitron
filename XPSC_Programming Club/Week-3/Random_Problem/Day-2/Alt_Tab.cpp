// Date: 12-11-2024 at 18:19 BST
// Link:https://www.codechef.com/problems/ALTTAB
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    reverse(v.begin(), v.end());
    map<string, int> mp;
    for (auto a : v)
    {
        mp[a]++;
        if (mp[a] == 1)
        {
            cout << a[a.size() - 2] << a[a.size() - 1];
        }
    }

    return 0;
}