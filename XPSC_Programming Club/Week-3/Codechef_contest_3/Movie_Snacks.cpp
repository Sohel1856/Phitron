// Date: 13-11-2024 at 21:02 BST
// Link:https://www.codechef.com/START160D/problems/MOVPR
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;
    int ans = (2 * x) + (3 * y);
    int ans2 = (z * 2) + y;
    cout << min(ans, ans2) << endl;
    return 0;
}