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
        int n, k;
        cin >> n >> k;
        map<int, vector<int>> bp;
        for (int i = 0; i < k; i++)
        {
            int bi, ci;
            cin >> bi >> ci;
            bp[bi].push_back(ci);
        }

        vector<int> cs;
        for (auto val : bp)
        {
            sort(val.second.rbegin(), val.second.rend());
            int sum = 0;
            for (int cost : val.second)
            {
                sum += cost;
            }
            cs.push_back(sum);
        }
        sort(cs.rbegin(), cs.rend());
        int ans = 0;
        for (int i = 0; i < min(n, (int)cs.size()); i++)
        {
            ans += cs[i];
        }

        cout << ans << endl;
    }

    return 0;
}
