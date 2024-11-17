//https://atcoder.jp/contests/abc172/tasks/abc172_b?lang=en

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[i])
        {
            continue;
        }
        else
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}