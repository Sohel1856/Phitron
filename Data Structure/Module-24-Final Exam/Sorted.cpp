#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        set<int> V;
        for (int i = 0; i < N; ++i)
        {
            int X;
            cin >> X;
            V.insert(X);
        }
        for (auto it = V.begin(); it != V.end(); ++it)
        {
            if (it != V.begin())
                cout << " ";
            cout << *it;
        }
        cout << endl;
    }
    return 0;
}