#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<int, int> mp;
    // mp.insert({10, 20});
    // mp.insert({2, 120});
    // cout << mp[10] << endl;
    // cout << mp[2] << endl;

    mp[10] = 20;
    mp[2] = 12;
    mp[10] = 15;
    mp[8] = 22;
    mp[17] = 7;
    mp[5] = 9;
    // for (auto [key, value] : mp)
    // {
    //     cout << key << "->" << value << endl;
    // }

    for (auto it : mp)
    {
        int key = it.first, value = it.second;
        cout << key << "->" << value << endl;
    }
    cout << endl;

    // find
    // auto it = mp.find(81);
    // if (it == mp.end())
    // {
    //     cout << "Key not founf" << endl;
    // }
    // else
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    // cout << mp[25] << endl;
    // cout << mp[9] << endl;
    // for (auto it : mp)
    // {
    //     int key = it.first, value = it.second;
    //     cout << key << "->" << value << endl;
    // }

    // Erase

    // mp.erase(8);
    // for (auto it : mp)
    // {
    //     int key = it.first, value = it.second;
    //     cout << key << "->" << value << endl;
    // }

    // auto it = mp.find(10);
    // for (it!=mp.end())
    // {
    //     mp.erase(it);
    // }
    // for (auto it : mp)
    // {
    //     int key = it.first, value = it.second;
    //     cout << key << "->" << value << endl;
    // }

    // size

    // cout << mp.size() << endl;
    // cout << mp.empty() << endl;
    // cout << mp.size() << endl;

    // r begin rend
    // auto it = mp.begin();
    // it++;
    // cout << it->first << " " << it->second << endl;

    // loawer bound uppernound

    // mp[6] = 49;
    // auto it = mp.lower_bound(6); // {6<=ja ase} jodi 6 na thake tahole 6 er por je boro key ase oita print hbe
    // cout << it->first << " " << it->second << endl;

    auto it = mp.upper_bound(10); // 9 er boro ta print hbe shudu
    cout << it->first << " " << it->second << endl;

    return 0;
}