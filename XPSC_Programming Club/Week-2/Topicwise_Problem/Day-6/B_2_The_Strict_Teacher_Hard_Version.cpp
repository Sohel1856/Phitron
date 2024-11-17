// Date: 09-11-2024 at 18:55 BST
// Link: https://codeforces.com/problemset/problem/2005/B2
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;

    while (test--)
    {
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> teachers(m);

        for (int i = 0; i < m; ++i)
        {
            cin >> teachers[i];
        }

        sort(teachers.begin(), teachers.end());
        while (q--)
        {
            int david_pos;
            cin >> david_pos;
            if (david_pos < teachers[0])
            {
                cout << teachers[0] - 1 << nl;
                continue;
            }
            if (david_pos > teachers[m - 1])
            {
                cout << n - teachers[m - 1] << nl;
                continue;
            }

            auto it = lower_bound(teachers.begin(), teachers.end(), david_pos);
            auto jt = it;
            jt--;

            int left = *jt, right = *it;
            int mid = (left + right) / 2;
            cout << min(abs(mid - left), abs(mid - right)) << nl;
        }
    }

    return 0;
}