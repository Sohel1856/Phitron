#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int Q;
    cin >> Q;
    queue<string> q;

    while (Q--) 
    {
        int C;
        cin >>C;
        if (C == 0)
        {
            string name;
            cin >> name;
            q.push(name);
        } 
        else if (C == 1) 
        {
            if (q.empty()) 
            {
                cout << "Invalid" <<endl;
            } 
            else 
            {
                cout << q.front()<<endl;
                q.pop();
            }
        }
    }

    return 0;
}
