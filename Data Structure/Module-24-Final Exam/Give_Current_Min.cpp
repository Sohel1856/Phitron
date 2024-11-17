#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<long long, vector<long long>, greater<long long>> PQ;
    long long N;
    cin >> N;
    while (N--)
        {
                long long X;
                cin >> X;
                PQ.push(X);
        }
        long long Q;
        cin >> Q;
        while (Q--)
        {

                long long S;
                cin >> S;
                if (S == 0)
                {
                        long long v;
                        cin >> v;
                        PQ.push(v);
                        if (!PQ.empty())
                                cout << PQ.top() << endl;
                        else
                                cout << "Empty" << endl;
                }
                else if (S == 1)
                {
                        if (!PQ.empty())
                                cout << PQ.top() << endl;
                        else
                                cout << "Empty" << endl;
                }
                else if (S == 2)
                {
                        if (!PQ.empty())
                        {
                                PQ.pop();
                                if (!PQ.empty())
                                        cout << PQ.top() << endl;
                                else
                                        cout << "Empty" << endl;
                        }
                        else
                                cout << "Empty" << endl;
                }
        }
        return 0;
}