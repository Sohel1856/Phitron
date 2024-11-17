// Date: 16-11-2024 at 18:39 BST
// Link: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int l = 0, r = 0;
    long long ans = 0;
    while (l < n && r < m)
    {
        int cnt1 = 0, cnt2 = 0, curr = a[l];
        while (l < n && curr == a[l])
        {
            cnt1++, l++;
        }
        while (curr > b[r])
        {
            r++;
        }
        while (r < m && curr == b[r])
        {
            cnt2++, r++;
        }
        ans += (1LL * cnt1 * cnt2);
    }
    cout << ans << endl;
    return 0;
}