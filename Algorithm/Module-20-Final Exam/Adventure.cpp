#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int DP[N][N];
int knapsack(int N1, int weight[], int value[], int W)
{
        if (N1 == 0 || W == 0)
                return 0;
        if (DP[N1][W] != -1)
                return DP[N1][W];

        if (weight[N1 - 1] <= W)
        {
                int op1 = knapsack(N1 - 1, weight, value, W - weight[N1 - 1]) + value[N1 - 1];
                int op2 = knapsack(N1 - 1, weight, value, W);
                return DP[N1][W] = max(op1, op2);
        }
        else
        {
                int op2 = knapsack(N1 - 1, weight, value, W);
                return DP[N1][W] = op2;
        }
}
int main()
{
        int T;
        cin >> T;
        while (T--)
        {
                int N1, W;
                cin >> N1 >> W;
                int weight[N1], value[N1];
                for (int i = 0; i < N1; i++)
                {
                        cin >> weight[i];
                }
                for (int i = 0; i < N1; i++)
                {
                        cin >> value[i];
                }
                for (int i = 0; i <= N1; i++)
                {
                        for (int j = 0; j <= W; j++)
                        {
                                DP[i][j] = -1;
                        }
                }
                cout << knapsack(N1, weight, value, W) << endl;
        }
        return 0;
}