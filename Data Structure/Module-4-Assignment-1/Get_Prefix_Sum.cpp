#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    vector<long long> v(N);
    v[0] = A[0];
    for (int i = 1; i < N; i++)
    {
        v[i] = A[i] + v[i - 1];
    }
    for (int i = N - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }

    return 0;
}