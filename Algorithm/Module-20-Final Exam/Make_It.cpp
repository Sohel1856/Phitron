#include <bits/stdc++.h>
using namespace std;
int input;
int DP[100005];

bool rec(int N)
{
        if (N > input)
                return false;
        if (N == input)
                return true;

        if (DP[N] != -1)
                return DP[N];
                
        DP[N] = rec(N +3) || rec(N * 2);
        return rec(N +3) || rec(N * 2);
}
int main()
{
        int T;
        cin >> T;
        while (T--)
        {
                cin >> input;
                memset(DP, -1, sizeof(DP));
                bool flag = rec(1);
                if (flag)
                        cout << "YES" << endl;
                else
                        cout << "NO" << endl;
        }
        return 0;
}