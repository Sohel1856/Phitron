#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int T; // Number of test cases
    cin >> T;

    while (T--)
    {
        int N, K; // Number of children and maximum allowed difference
        cin >> N >> K;
        vector<int> A(N); // Chocolates distribution

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        // Find the minimum and maximum chocolates
        int minA = *min_element(A.begin(), A.end());
        int maxA = *max_element(A.begin(), A.end());

        // Check conditions for redistribution
        if (minA < 1)
        {
            cout << "NO" << endl; // Not possible if any child has 0 chocolates
        }
        else if (maxA - minA > K)
        {
            cout << "NO" << endl; // Not possible if the difference exceeds K
        }
        else
        {
            cout << "YES" << endl; // Possible to redistribute
        }
    }

    return 0;
}
