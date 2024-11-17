// Date: 13-11-2024 at 22:07 BST
// Link:
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
        int ar;
        cin >> ar;
        vector<int> arb(ar);
        for (int i = 1; i <= ar; i++)
            cin >> arb[i];
        int countones = 0;
        for (int i = 1; i < ar; i++)
        {
            if (arb[i] == 1)
                countones++;
        }
        int countzero = 0;
        for (int i = 2; i <= ar; i++)
        {
            if (arb[i] == 0)
                countzero++;
        }
        int minmumcunt = min(countones + countzero, ar - 1);
        int total = ar + minmumcunt;
        cout << total << endl;
    }

    return 0;
}