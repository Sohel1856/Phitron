#include <bits/stdc++.h>
using namespace std;

void computePre(int n, vector<long long> &pre_sum)
{
     for (int i = 1; i <= n; ++i)
     {
          pre_sum[i] = pre_sum[i - 1] + (i + 1) / 2;
     }
}

int main()
{
     int n, q;
     cin >> n >> q;

     vector<long long> pre_sum(n + 1);
     computePre(n, pre_sum);

     while (q--)
     {
          int l, r;
          cin >> l >> r;
          cout << pre_sum[r] - pre_sum[l - 1] << endl;
     }

     return 0;
}