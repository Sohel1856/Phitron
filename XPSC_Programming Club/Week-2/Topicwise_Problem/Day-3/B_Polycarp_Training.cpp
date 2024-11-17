// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//     sort(v.begin(), v.end());
//     int cnt = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (v[i] >= cnt + 1)
//         {
//             cnt++;
//         }
//     }
//     cout << cnt << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    multiset<int> ml;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }
    int days = 0, problem = 1;
    while (!ml.empty())
    {
        auto Lb = ml.lower_bound(problem);
        if (Lb != ml.end())
        {
            days++;
            ml.erase(Lb);
        }
        else
        {
            break;
        }
        problem++;
    }
    cout << days << endl;

    return 0;
}