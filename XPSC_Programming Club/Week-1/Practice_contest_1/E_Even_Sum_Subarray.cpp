#include <iostream>
#include <vector>
using namespace std;

int Sum(vector<int> &arr)
{
    int n = arr.size();
    int maxLength = 0;
    // Iterate over all possible starting points
    for (int i = 0; i < n; i++)
    {
        int currentSum = 0;
        // Iterate over all possible ending points
        for (int j = i; j < n; j++)
        {
            currentSum += arr[j];
            // Check if the current sum is even
            if (currentSum % 2 == 0)
            {
                maxLength = max(maxLength, j - i + 1);
            }
        }
    }
    return maxLength;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }

        int result = Sum(A);
        cout << result << endl;
    }

    return 0;
}
