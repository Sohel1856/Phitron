#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        // Step 1: Apply Kadane's algorithm to find maximum subarray sum
        int max_so_far = 0, max_ending_here = 0;
        int num_operations = 0;

        for (int i = 0; i < N; i++)
        {
            if (A[i] < 0)
            {
                num_operations++; // Negative elements will be zeroed out
            }

            max_ending_here = max(0, max_ending_here + A[i]);
            max_so_far = max(max_so_far, max_ending_here);
        }

        // Output the minimum number of operations required
        cout << num_operations << endl;
    }

    return 0;
}
