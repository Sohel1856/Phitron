#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int n;
    // cin >> n;
    // // vector<int> v(n); //push back korle n size declare korte hbe na
    // vector<int> v;
    // for (int i = 0; i < n; i++)
    // {
    //     // cin >> v[i];
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    // cout << v.size() << endl;
    // v.pop_back();
    // cout << v.size() << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << '\n';
    // cout << v.front() << '\n'; //samner value dekhai
    // cout << v.back() << '\n';  // sobar sesh er value dekhai

    // // v.clear(); //pura vector clear kore dei
    // cout << v.empty() << endl; // empty na hole 0 dibe, ar empty hole vector 1 dibe

    // Assign
    // int n;
    // cin >> n;
    // vector<int> v(n, 2); // assign fn use na kore direct value assign
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }

    // int n;
    // cin >> n;
    // vector<int> v;
    // v.assign(n, 10); //assign function use kore value bosanu jai
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }

    // Iterator use = end,begin,rend,rbegin

    // int n;
    // cin >> n;
    // vector<int> v;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    // auto it = v.begin() + 3;
    // cout << *it << endl;

    // for (auto it = v.begin(); it < v.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    // -end fn
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // auto lastElement = --v.end();
    // // lastElement--;
    // cout << *lastElement << endl;

    // reverse(v.begin(), v.end());
    // sort(v.rbegin(), v.rend()); // descending
    // sort(v.begin(), v.end(), greater<int>()); // descending
    sort(v.begin(), v.end()); // ascending
    for (auto value : v)
    {
        cout << value << " ";
    }
    cout << endl;

    auto mn = min_element(v.begin(), v.end());
    cout << *mn << endl;

    auto mx = max_element(v.begin(), v.end());
    cout << *mx << endl;

    int maxelementPosition = mx - v.begin();
    cout << maxelementPosition << " ";
    return 0;
}