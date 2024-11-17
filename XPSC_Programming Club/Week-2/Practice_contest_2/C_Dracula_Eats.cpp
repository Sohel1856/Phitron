#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        if (N < 2)
        {
            cout << 0 << endl;
        }
        else
        {

            int d = (N - 2) / 7;
            cout << d + 1 << endl;
        }
    }
    return 0;
}
// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int test;
//     cin >> test;
//     while (test--)
//     {
//         int n;
//         cin >> n;
//         int cnt = 0;
//         for (int i = 2; i <= n; i += 7)
//             cnt++;
//         cout << cnt << endl;
//     }
//     return 0;
// }