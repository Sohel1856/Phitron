#include <bits/stdc++.h>
using namespace std;
#define null nullptr
#define ll long long int
#define nl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    long long int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    sort(v.begin(), v.end());
    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            ll flag = sum - v[i];
            if (flag % 2 == 0)
            {
                cout << flag << endl;
                break;
            }
        }
    }
    return 0;
}