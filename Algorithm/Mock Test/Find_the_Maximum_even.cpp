#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    
    vector<int> arr(n);
    
    for (int i = 0; i < n; ++i) 
    {
        cin >> arr[i];
    }

    int max_even = -1;
    int max_even_sum = -1; 

    for (int i = 0; i < n; ++i) 
    {
        if (arr[i] % 2 == 0) 
        {
            max_even = max(max_even, arr[i]);
        }
    }
    for (int i = 0; i < n; ++i) 
    {
        for (int j = i + 1; j < n; ++j) 
        {
            int sum = arr[i] + arr[j];
            if (sum % 2 == 0) 
            {
                max_even_sum = max(max_even_sum, sum);
            }
        }
    }
    cout << max(max_even, max_even_sum) << endl;

    return 0;
}
