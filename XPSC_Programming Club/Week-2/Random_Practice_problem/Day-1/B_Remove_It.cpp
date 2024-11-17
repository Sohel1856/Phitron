// https://atcoder.jp/contests/abc191/submissions/me
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    multiset<int> ml;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x != m)
            ml.insert(x);
    }
    for (auto value : ml)
    {
        cout << value << " ";
    }

    return 0;
}
// #include <bits/stdc++.h>
// #define null nullptr
// #define ll long long int
// #define nl '\n'
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll n, m;
//     cin >> n >> m;
//     vector<ll> v;
//     for (ll i = 0; i < n; i++)
//     {
//         ll x;
//         cin >> x;
//         if (x != m)
//             v.push_back(x);
//     }
//     for (auto x : v)
//         cout << x << " ";
//     return 0;
// }
