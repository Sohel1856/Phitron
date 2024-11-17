// Date: 11-11-2024 at 21:02 BST
// Link:
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;
    int sum = x + z;
    if (sum >= y)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}