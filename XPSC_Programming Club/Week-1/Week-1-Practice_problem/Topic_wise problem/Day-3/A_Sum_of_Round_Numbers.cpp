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
        if (n % 10 != 0)
        {
            v.push_back(n % 10);
            int ans = n % 10;
            n = n - ans;
        }
        if (n % 100 != 0)
        {
            v.push_back(n % 100);
            int ans = n % 100;
            n = n - ans;
        }
        if (n % 1000 != 0)
        {
            v.push_back(n % 1000);
            int ans = n % 1000;
            n = n - ans;
        }
        if (n % 10000 != 0)
        {
            v.push_back(n % 10000);
            int ans = n % 10000;
            n = n - ans;
        }
        if (n >= 10000 && n % 10000 == 0)
        {
            v.push_back(n);
        }
        cout << v.size() << endl;
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int ar[6];
//         int total = 0, m = 1;
//         for (int i = 1; i < 6; i++)
//         {
//             ar[i] = n % 10;
//             n = n / 10;
//             if (ar[i] != 0)
//             {
//                 total++;
//             }
//         }
//         cout << total << endl;
//         for (int i = 1; i < 6; i++)
//         {
//             if (ar[i] != 0)
//             {
//                 cout << ar[i] * m << " ";
//             }
//             m = m * 10;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// #define null nullptr
// #define ll long long int
// #define nl '\n'
// using namespace std;

// void solve()
// {
//     int n;
//     cin >> n;
//     int x = n;
//     vector<string> vv;
//     int i = 1;
//     while (x != 0)
//     {
//         int tmp = x % 10;
//         x /= 10;
//         if (tmp != 0)
//         {
//             string s;
//             s.push_back(tmp + '0');
//             for (int j = 1; j < i; j++)
//             {
//                 s.push_back('0');
//             }
//             vv.push_back(s);
//         }
//         i++;
//     }
//     cout << vv.size() << nl;
//     for (auto x : vv)
//         cout << x << " ";
//     cout << nl;
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