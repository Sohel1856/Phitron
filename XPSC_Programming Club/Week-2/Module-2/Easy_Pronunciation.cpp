#include <bits/stdc++.h>
using namespace std;

bool notVowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return false;
    return true;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag = false;
        for (int i = 0; i <= ((n - 4)); i++)
        {
            if (notVowel(s[i]) && notVowel(s[i + 1]) && notVowel(s[i + 2]) && notVowel(s[i + 3]))
            {
                cout << "NO" << endl;
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << "YES" << endl;
        }
    }
}
