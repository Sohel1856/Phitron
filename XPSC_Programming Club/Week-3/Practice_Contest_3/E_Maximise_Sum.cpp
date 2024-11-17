// Date: 11-11-2024 at 21:46 BST
// Link:
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
        int N;
        cin >> N;

        long long Sum = 0;
        for (int i = 0; i < N; ++i)
        {
            int num;
            cin >> num;
            Sum += abs(num);
        }

        cout << Sum << endl;
    }
    return 0;
}
