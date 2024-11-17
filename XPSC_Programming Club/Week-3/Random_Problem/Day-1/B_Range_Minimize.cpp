// Date: 10-11-2024 at 23:53 BST
// Link:https://www.codechef.com/problems/MNR?tab=statement
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
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int possible1 = v[n - 1] - v[2];
        int possible2 = v[n - 3] - v[0];
        int possible3 = v[n - 2] - v[1];
        int ans = min({possible1, possible2, possible3});
        cout << ans << endl;
    }

    return 0;
}