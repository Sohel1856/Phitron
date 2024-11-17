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
        string S; 
        cin >> S;
        string result = S;

        for (int i = 0; i <= N - 3; i++)
        {
            if (result.substr(i, 3) == "111" || result.substr(i, 3) == "110" || result.substr(i, 3) == "101")
            {
                result[i] = '1';    
                result[i + 1] = '0'; 
                result[i + 2] = '0';
            }
        }

        cout << result << endl;
    }

    return 0;
}
