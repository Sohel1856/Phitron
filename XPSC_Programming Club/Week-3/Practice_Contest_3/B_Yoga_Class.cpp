// Date: 11-11-2024 at 21:12 BST
// Link:https://vjudge.net/contest/671238#problem/B
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
        int n, x, y;
        cin >> n >> x >> y;
        int ans = n * x;
        int ans1 = (n % 2) * x + ((n - (n % 2)) / 2) * y;
        cout << max(ans, ans1) << endl;
    }

    return 0;
}