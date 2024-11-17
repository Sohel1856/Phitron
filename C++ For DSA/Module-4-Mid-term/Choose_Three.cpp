#include <bits/stdc++.h>

using namespace std;
bool sum(int array[], int n, int s)
{
    for (int i = 0; i < n - 2; ++i)
    {
        for (int j = i + 1; j < n - 1; ++j)
        {
            for (int k = j + 1; k < n; ++k)
            {
                if (array[i] + array[j] + array[k] == s)
                {
                    return true;
                }
            }
        }
    }
    return false;
}
int main()
{
    int t;
    cin >> t;

  for(int i=t;i>0;i--)
    {
        int n, s;
        cin >> n>> s;

        int array[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> array[i];
        }

        
        if (sum(array, n, s))
        {
          cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}