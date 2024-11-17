#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    unordered_map<string, int> mp;
    while (n--)
    {
        string s;
        cin >> s;

        if (mp.count(s) == 0)
        {
            mp[s] = 0;
            cout << "OK" << endl;
        }
        else
        {
            mp[s]++;
            cout << s << mp[s] << endl;
        }
    }

    return 0;
}
