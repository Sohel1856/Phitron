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
        int N, X;
        cin >> N >> X;

        vector<int> A(N);
        vector<int> B(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        for (int i = 0; i < N; i++)
        {
            cin >> B[i];
        }
        vector<int> Loos;
        for (int i = 0; i < N; i++)
        {
            if (A[i] <= B[i])
            {
                Loos.push_back(B[i] - A[i]);
            }
        }
        sort(Loos.begin(), Loos.end());
        int cnt = 0;
        for (int i = 0; i < Loos.size(); i++)
        {
            if (X > Loos[i])
            {
                cnt++;
                X = X - Loos[i] - 1;
            }
        }
        int win = Loos.size() - cnt;
        int ans = N - win;
        if (ans < win)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
