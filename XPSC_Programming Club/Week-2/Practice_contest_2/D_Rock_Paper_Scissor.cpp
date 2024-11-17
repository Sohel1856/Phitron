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
        string A, B;
        cin >> A >> B;

        int chef = 0, chefina = 0;
        vector<int> C;
        for (int i = 0; i < N; i++)
        {
            if (A[i] == B[i])
            {
                continue;
            }
            if ((A[i] == 'R' && B[i] == 'S') || (A[i] == 'S' && B[i] == 'P') || (A[i] == 'P' && B[i] == 'R'))
            {
                chef++;
            }
            else
            {
                chefina++;
                C.push_back(i);
            }
        }
        if (chef > chefina)
        {
            cout << 0 << endl;
        }
        else
        {
            int D = chefina - chef;
            int S = (D / 2) + 1;
            cout << S << endl;
        }
    }

    return 0;
}
