#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    cin.ignore();
    map<string, string> mp;
    for (int i = 0; i < n; i++)
    {
        string A, B;
        cin >> A >> B;
        mp[B] = A;
    }
    for (int i = 0; i < m; i++)
    {
        string A, B;
        cin >> A >> B;
        B.pop_back();
        cout << A << " " << B << ";" << " #" << mp[B] << endl;
    }
    return 0;
}