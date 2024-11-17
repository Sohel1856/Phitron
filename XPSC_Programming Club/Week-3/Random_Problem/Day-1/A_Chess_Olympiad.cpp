// Date: 10-11-2024 at 23:24 BST
// Link:https://www.codechef.com/problems/CHOLY
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    float x, y, z;
    cin >> x >> y >> z;
    float remain = (4 - (x + y + z));
    float win = (x * 1) + (y * 0.5) + remain;
    // cout << win << endl;
    float opposite = (z * 1) + (y * 0.5);
    if (win > opposite)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
        
    // if (remain < 4)
    // {
    //     win += (remain * 1);
    //     // cout << win << endl;
    //     if (win > opposite)
    //     {
    //         cout << "Yes" << endl;
    //     }
    //     else
    //     {
    //         cout << "No" << endl;
    //     }
    // }
    // else
    // {
    //     if (win > opposite)
    //     {
    //         cout << "Yes" << endl;
    //     }
    //     else
    //     {
    //         cout << "No" << endl;
    //     }
    // }
    return 0;
}