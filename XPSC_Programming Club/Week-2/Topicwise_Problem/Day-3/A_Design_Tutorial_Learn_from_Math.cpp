// Date: 08-11-2024 at 11:57 BST
// Link:https://codeforces.com/problemset/problem/472/A
#include <bits/stdc++.h>
using namespace std;

bool isComposite(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return true; // Found a divisor other than 1 and itself
        }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    for (int i = 4; i <= n / 2; i++)
    {
        int y = n - i;
        if (isComposite(i) && isComposite(y))
        {
            cout << i << " " << y << endl;
            return 0;
        }
    }
    return 0;
}
// #include <bits/stdc++.h>
// #define ll long long
// #define in cin >>
// #define srt(a) sort(a.begin(), a.end());
// #define vtr vector<long long>
// #define unset unordered_set<long long>
// #define pr cout <<
// #define nl << endl;
// using namespace std;
// int main()
// {
//     int n;
//     cin >>n;
//     int x = 4;
//     bool f = false;
//     while (true)
//     {
//         int y = n - x;
//         for (int i = 2; i <= sqrt(y); i++)
//         {
//             if (y % i == 0)
//             {
//                 f = true;
//                 break;
//             }
//         }
//         if (f)
//         {
//             cout << x << " " << y;
//             break;
//         }
//         else
//         {
//             x += 2;
//         }
//     }
//     return 0;
// }