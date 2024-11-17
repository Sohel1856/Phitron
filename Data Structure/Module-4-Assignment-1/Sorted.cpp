#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        int count=1;
        for (int i = 1; i < N; i++)
        {
            if (A[i - 1] > A[i])
            {
                count=0;
                break;
            }
        }
        if (count==1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}