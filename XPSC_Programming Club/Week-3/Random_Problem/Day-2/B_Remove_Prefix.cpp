// Date: 12-11-2024 at 20:01 BST
// Link: https://codeforces.com/problemset/problem/1714/B

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
        map<int, int> mp;
        vector<int> v;
        vector<int> v2;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v2.push_back(x);
        }
        for (int i = n - 1; i >= 0; i--)
        {
            mp[v2[i]]++;
            if (mp[v2[i]] == 1)
            {
                v.push_back(v2[i]);
            }
            else
                break;
        }
        cout << n - v.size() << endl;
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
//         vector<int> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         set<int> seen;

//         int prefix_len = 0;

//         for (int i = n - 1; i >= 0; i--)
//         {
//             // cout << seen.count(a[i]) << endl;
//             if (seen.count(a[i]) == 1)
//                 break;
//             seen.insert(a[i]);
//             // cout << a[i] << endl;
//             prefix_len++;
//         }
//         cout << n - prefix_len << endl;
//     }

//     return 0;
// }
// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     ios::sync_with_stdio(false);
// //     cin.tie(nullptr);
// //     int t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         int n;
// //         cin >> n;
// //         map<int, int> mp;
// //         vector<int>v;
// //         for (int i = 0; i < n; i++)
// //         {
// //             int x;
// //             cin >> x;
// //             mp[x]++;
// //             if (mp[x] == 1)
// //             {
// //                 v.push_back(x);
// //             }
// //         }
// //         cout<<n-v.size()<<endl;
// //     }

// //     return 0;
// // }
