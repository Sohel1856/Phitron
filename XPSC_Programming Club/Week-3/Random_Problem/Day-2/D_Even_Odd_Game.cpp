// Date: 13-11-2024 at 19:30 BST
// Link:https://codeforces.com/contest/1472/problem/D
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i];
    }
    sort(v.rbegin(), v.rend());

    long long alice = 0, bob = 0;
    for (int i = 0; i < n; i++)
    {
        // Alice turn
        if (i % 2 == 0)
        {
            if (v[i] % 2 == 0)
            {
                alice += v[i];
            }
            else
            {
                continue;
            }
        }
        else
        { // Bob turn
            if (v[i] % 2 != 0)
            {
                bob += v[i];
            }
            else
            {
                continue;
            }
        }
    }
    // cout << endl
    //      << alice << endl;
    // cout << bob << endl;
    if (alice > bob)
    {
        cout << "Alice" << endl;
    }
    else if (bob > alice)
    {
        cout << "Bob" << endl;
    }
    else
    {
        cout << "Tie" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// void solve(int n)
// {
//     int x;
//     cin >> x;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     long long int alice = 0;
//     long long int bob = 0;
//     deque<int> ev;
//     deque<int> od;
//     sort(v.begin(), v.end());
//     for (int i = 0; i < n; i++)
//     {
//         if (v[i] % 2 == 0)
//         {
//             ev.push_back(v[i]);
//         }
//         else
//         {
//             od.push_back(v[i]);
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (i % 2 != 0)
//         {
//             alice += ev.front();
//             ev.pop_front();
//         }
//         else
//         {
//             bob += od.front();
//             od.pop_front();
//         }
//     }
//     if (alice < bob)
//     {
//         cout << "Bob" << endl;
//     }
//     else if (alice == bob)
//     {
//         cout << "Tie" << endl;
//     }
//     else
//     {
//         cout << "Alice" << endl;
//     }
// }
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//     while (n--)
//     {
//         solve(n);
//     }

//     return 0;
// }
