
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
        int a;
        cin >> a;
        int even = 0;
        int odd = 0;

        for (int i = 1; i <= a; i++) 
        {
            if (a % i == 0) 
            {
                if (i % 2 == 0) 
                {
                    even++;
                }
                else 
                {
                    odd++;
                }
            }
        }

        if (even > odd)
        {
            cout << 1 << endl;
        }
        else if (even == odd)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
