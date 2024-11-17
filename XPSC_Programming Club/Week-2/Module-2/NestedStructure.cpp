#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // map<vector<int>, int> mp;
    // vector<int> a;
    // a.push_back(2);
    // a.push_back(1);
    // a.push_back(4);
    // a.push_back(5);
    // a.push_back(9);
    // mp[a] = 5;
    // for (auto [x, y] : mp)
    // {
    //     vector<int> v = x;
    //     for (auto val : v)
    //     {
    //         cout << val << " ";
    //     }
    //     cout << endl;
    //     cout << y << endl;
    // }

    map<int, set<int>> mp;
    set<int> s1;
    s1.insert(2);
    s1.insert(5);
    s1.insert(2);

    set<int> s2;
    s2.insert(9);
    s2.insert(5);
    s2.insert(4);

    set<int> s3;
    s3.insert(12);
    s3.insert(1);
    s3.insert(6);
    s3.insert(8);

    mp[5] = s1;
    mp[7] = s2;
    mp[10] = s3;

    // print
    for (auto [x, y] : mp)
    {
        cout << x << "->";
        // set<int>s=y
        for (auto value : y)
        {
            cout << value << " ";
        }
        cout << endl;
    }

    int x = 6, y = 8;
    auto Lb1 = mp.lower_bound(x);
    if (Lb1 != mp.end())
    {
        int ans = Lb1->first;
        cout << ans << endl;
        auto Lb2 = mp[ans].lower_bound(y);
        if (Lb2 != mp[ans].end())
        {
            cout << *Lb2 << endl;
        }
        else
        {

        }
    }
    else
    {

    }
    return 0;
}