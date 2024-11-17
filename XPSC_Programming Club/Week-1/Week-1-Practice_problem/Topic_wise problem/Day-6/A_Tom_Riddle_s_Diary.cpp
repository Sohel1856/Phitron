#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore();
    vector<string> v(n);
    map<string, bool> mp;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
    {
        if (!mp[v[i]])
        {
            cout << "NO" << endl;
            mp[v[i]] = true;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}