#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B;
    cin >> A >> B;

    int mx = max(A, B);
    if (A == B)
    {
        int sum = mx + A;
        cout << sum;
    }
    else
    {
        int sum = mx + (mx - 1);
        cout << sum;
    }
    return 0;
}