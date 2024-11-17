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
        int tk = 100;
        if (tk == n)
        {
            cout << 0 << endl;
        }
        else if (tk > n)
        {
            int s = tk - n;
            cout <<(s / 10) * 10 << endl; // s-(s%10)
        }
    }

    return 0;
}
// #include <iostream>
// using namespace std;

// int main() {
//     int T;
//     cin >> T; // Number of test cases
    
//     while (T--) {
//         int X;
//         cin >> X; // Amount owed to the driver

//         int change = 100 - X; // Calculate how much change the driver owes
//         int maxPayback = change - (change % 10); // Largest multiple of 10 less than or equal to change

//         cout << maxPayback << endl;
//     }
    
//     return 0;
// }
