// Date: 11-11-2024 at 09:47 BST
// Link: https://www.codechef.com/problems/MEBA?tab=statement
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            st.insert(x);
        }
        if (st.size() == 1)
        {
            cout << "YES" << endl;
        }
        else if (st.size() == 2)
        {
            vector<int> tmp(st.begin(), st.end());
            if (tmp[0] == 0 || tmp[1] == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}