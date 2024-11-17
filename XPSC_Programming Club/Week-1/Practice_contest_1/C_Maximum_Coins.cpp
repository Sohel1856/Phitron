
#include<bits/stdc++.h>
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

        int Win = 0;
        for (int i = N - X + 1; i <= N; i++)
        {
            Win += pow(2, i);
        }
        int Lose= 0;
        for (int i = 1; i <= N - X; i++)
        {
            Lose += pow(2, i);
        }
        int coin = Win - Lose;
        cout << coin << endl;
    }
    return 0;
}
