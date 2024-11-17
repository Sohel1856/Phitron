#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int A, B;
    cin >> A >> B;
    if (A > B)
    {
        int tk = A - B;
        cout << tk << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}