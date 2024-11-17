#include<bits/stdc++.h>
using namespace std;

bool is_it_Valid(string &S) 
{
    stack<char> st;

    for (char ch : S) 
    {
        if (ch == '0') 
        {
            if (!st.empty() && st.top() == '1') 
            {
                st.pop();
            } 
            else 
            {
                st.push(ch);
            }
        } 
        else if (ch == '1') 
        {
            if (!st.empty() && st.top() == '0') 
            {
                st.pop(); 
            } else 
            {
                st.push(ch);
            }
        }
    }
    return st.empty();
}

int main() {
    int T;
    cin >> T;

    while (T--) 
    {
        string S;
        cin >> S;
        if (is_it_Valid(S)) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
