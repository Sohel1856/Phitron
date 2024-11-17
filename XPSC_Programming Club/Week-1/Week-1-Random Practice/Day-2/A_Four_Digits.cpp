#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    string S = to_string(N);

    if (S.length() == 3)
    {
        S = "0" + S;
    }
    else if (S.length() == 2)
    {
        S = "00" + S;
    }
    else if (S.length() == 1)
    {
        S = "000" + S;
    }

    cout << S << endl;

    return 0;
}
