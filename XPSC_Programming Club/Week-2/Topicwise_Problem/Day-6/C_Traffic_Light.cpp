// Date: 09-11-2024 at 19:34 BST
// Link: https://codeforces.com/problemset/problem/1744/C
#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    char c;
    string s;
    cin >> n >> c >> s;

    vector<int> green_positions;

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'g')
        {
            green_positions.push_back(i);
        }
    }

    int max_distance = 0;

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == c)
        {
            auto it = lower_bound(green_positions.begin(), green_positions.end(), i);
            int distance;

            if (it == green_positions.end())
            {
                distance = (n - i) + green_positions[0];
            }
            else
            {
                distance = *it - i;
            }

            max_distance = max(max_distance, distance);
        }
    }

    cout << max_distance << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}