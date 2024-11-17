// Date: 09-11-2024 at 11:12 BST
// Link: https://codeforces.com/problemset/problem/1622/B
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
        int a[n];
        int b[n];
        map<int, int> map;
        vector<int> ones;
        vector<int> zeros;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
            map[a[i]] = i;
        }
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                zeros.push_back(a[i]);
            else
                ones.push_back(a[i]);
        }
        sort(zeros.begin(), zeros.end(), greater<int>());
        sort(ones.begin(), ones.end(), greater<int>());
        sort(a, a + n, greater<int>());

        int i;
        for (i = 0; i < ones.size(); i++)
        {
            b[map[ones[i]]] = a[i];
        }
        for (int j = 0; j < zeros.size(); j++)
        {
            b[map[zeros[j]]] = a[i];
            i++;
        }
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}