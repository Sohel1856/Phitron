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
    sort(A.begin(), A.end());
    int count = 0;
    for (int i = 0; i < N-1; i++)
    {
        if (A[i] == A[i + 1])
        {
            count++;
            break;
        }
    }
    if (count == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}