// Date: 12-11-2024 at 19:29 BST
// Link:https://www.codechef.com/problems/MOONSOON?tab=statement
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
        int n, m, h;
        cin >> n >> m >> h;
        vector<int> v;
        vector<int> v1;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            v.push_back(k);
        }
        for (int i = 0; i < m; i++)
        {
            int a;
            cin >> a;
            v1.push_back(a);
        }
        sort(v.begin(), v.end(), greater<int>());
        sort(v1.begin(), v1.end(), greater<int>());
        long long sum = 0;
        for (int i = 0; i < min(n, m); i++)
        {
            sum += min(1ll * v[i], 1ll * v1[i] * h);
        }
        cout << sum << endl;
    }
    return 0;
}

// //  Date: 12-11-2024 at 22:32 BST
// // Link: https://www.codechef.com/problems/MOONSOON
// #include <bits/stdc++.h>
// #define null nullptr
// #define ll long long int
// #define nl '\n'
// using namespace std;
// void solve()
// {
//     ll gar, gze, ph;
//     cin >> gar >> gze >> ph;
//     vector<ll> gari(gar), garaze(gze);
//     // gari input
//     for (ll i = 0; i < gar; i++)
//         cin >> gari[i];
//     // garaze input
//     for (ll i = 0; i < gze; i++)
//         cin >> garaze[i];
//     sort(gari.begin(), gari.end(), greater<ll>());
//     sort(garaze.begin(), garaze.end(), greater<ll>());
//     ll j = 0, k = 0;
//     // j==gari     k==garaze
//     ll ans = 0;
//     while (j < gari.size() && k < gze)
//     {
//         ll canCharge = garaze[k] * ph;
//         if (gari[j] > canCharge)
//         {
//             ans += canCharge;
//         }
//         else
//         {
//             ans += gari[j];
//         }
//         j++, k++;
//     }
//     cout << ans << nl;
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int test;
//     cin >> test;
//     while (test--)
//     {
//         solve();
//     }
//     return 0;
// }