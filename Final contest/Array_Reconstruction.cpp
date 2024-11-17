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
          long long Sum = 0, sum1, Diff, A[N];
          for (int i = 0; i < N - 2; i++)
          {
               cin >> A[i];
               Sum += A[i];
          }
          cin >> sum1;
          Diff = sum1 - Sum;
          cout << Diff + 1 << endl;
     }

     return 0;
}