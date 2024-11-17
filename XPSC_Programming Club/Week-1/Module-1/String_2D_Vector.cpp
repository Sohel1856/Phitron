#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        char x;
        cin >> x;
        s.push_back(x);
    }
    s.pop_back();
    cout << s << endl;
    cout << s.front() << " " << s.back() << endl;
    cout << s.empty() << endl;
    // s.clear();
    // cout << s.empty() << endl;

    cout << s.substr(0, 4) << endl;
    return 0;
}