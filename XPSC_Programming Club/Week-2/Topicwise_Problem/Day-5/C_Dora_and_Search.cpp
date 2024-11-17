// Date: 09-11-2024 at 09:01 BST
// Link: https://codeforces.com/problemset/problem/1793/C
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
        int n;
        cin >> n;
        vector<int> v(n);
        multiset<int> ml;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            ml.insert(v[i]);
        }
        int l = 0;
        int r = n - 1;
        bool flag = true;
        while (l < r)
        {
            if (v[l] == *ml.begin() || v[l] == *(ml.rbegin()))
            {
                auto it = ml.find(v[l]);
                ml.erase(it);
                l++;
            }
            else if (v[r] == *ml.begin() || v[r] == *(ml.rbegin()))
            {
                auto it = ml.find(v[r]);
                ml.erase(it);
                r--;
            }
            else
            {
                cout << l + 1 << " " << r + 1 << endl;

                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}