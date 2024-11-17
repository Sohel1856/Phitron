#include <bits/stdc++.h>
using namespace std;
const long long N = 1e18;
int main()
{
    int n, e;
    cin >> n >> e;
    long long mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[i][j] = N;

            if (i == j)
                mat[i][j] = 0;
        }
    }

    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        if (w < mat[u - 1][v - 1])
            mat[u - 1][v - 1] = w;
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][k] + mat[k][j] < mat[i][j])
                {
                    mat[i][j] = mat[i][k] + mat[k][j];
                }
            }
        }
    }
    int T;
    cin >> T;
    while (T--)
    {
        int a, b;
        cin >> a >> b;
        if (mat[a - 1][b - 1] == N)
            cout << -1 << endl;
        else
            cout << mat[a - 1][b - 1] << endl;
    }
    return 0;
}