#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore();
    vector<string> v(n);
    map<string, bool> mp;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = n - 1; i >= 0; i--)
    {
        if (!mp[v[i]])
        {
            cout << v[i] << endl;
            mp[v[i]] = true;
        }
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;

//     unordered_map<string, list<string>::iterator> chatMap; // Map to store iterators
//     list<string> chatList;                                 // Maintains the order of chats

//     while (n--)
//     {
//         string s;
//         cin >> s;

//         if (chatMap.find(s) != chatMap.end())
//         {
//             // If already in the list, remove from the current position
//             chatList.erase(chatMap[s]);
//         }
//         // Add to the front of the list and update the iterator in the map
//         chatList.push_front(s);
//         chatMap[s] = chatList.begin();
//     }

//     // Output the final chat order
//     for (const string &friendName : chatList)
//     {
//         cout << friendName << '\n';
//     }

//     return 0;
// }