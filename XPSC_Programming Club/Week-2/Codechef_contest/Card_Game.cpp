#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int N, X;
        cin >> N >> X;

        int even_count = N / 2;
        int odd_count = N - even_count;

        if (X % 2 == 0)
        {
            cout << even_count - 1 << endl;
        }
        else
        {
            cout << odd_count - 1 << endl;
        }
    }
    return 0;
}
