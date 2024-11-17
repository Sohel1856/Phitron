#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    multiset<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    // auto it = s.begin();
    // it++;
    // it++;
    // it++;
    // it--;
    // cout << *it << " ";

    // for loop print
    //  for (auto it = s.begin(); it != s.end(); ++it)
    //  {
    //      cout << *it << " ";
    //  }

    for (auto value : s)
    {
        cout << value << " ";
    }
    cout << endl;
    // Find
    //  auto it = s.find(9);
    //  if (it != s.end())
    //  {
    //      cout << "Found" << endl;
    //  }
    //  else
    //  {
    //      cout << " Not found" << endl;
    //  }

    // Erase function
    // auto it = s.find(9);
    // if (it != s.end())
    // {
    //     s.erase(9);
    //     for (auto value : s)
    //     {
    //         cout << value << " ";
    //     }
    // }
    // else
    // {
    //     cout << "NOT Found" << endl;
    // }

    // s.erase(6); // o(log n)
    // s.erase(9); // o(log+k) k holo ek er beshi jotu ta erase hbe tar man
    // for (auto value : s)
    // {
    //     cout << value << " ";
    // }
    // auto it = s.find(9);
    // s.erase(it); /// 1 er odhik value thakle shudu 1ta value erase korar niom
    // // O(logn+log n)
    // for (auto value : s)
    // {
    //     cout << value << " ";
    // }
    // cout << endl;
    // // count fn
    // cout << s.count(9) << endl; // number ta thakle 1 print hbe ar na thakle 0 print hbe

    int N;
    cin >> N;
    // auto it = s.lower_bound(N); //greater or equal value pawa jabe
    auto it = s.upper_bound(N); // jet dibe tar theke boro ta pawa jabe
    if (s.end() == it)
    {
        cout << "END" << endl;
    }
    else
        cout << *it << endl;

    return 0;
}