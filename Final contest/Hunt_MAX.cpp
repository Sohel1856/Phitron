#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    cin >> Q;

    unordered_map<int, int> freq;
    priority_queue<pair<int, int>> maxHeap;

    while (Q--) 
    {
        int type;
        cin >> type;

        if (type == 1) 
        {
            int X;
            cin >> X;
            freq[X]++;
            maxHeap.push({freq[X], X});
        } 
        else if (type == 2) 
        {
            if (freq.empty()) 
            {
                cout << "empty"<<endl;
            } 
            else 
            {
                while (!maxHeap.empty()) 
                {
                    int count = maxHeap.top().first;
                    int value = maxHeap.top().second;
                    if (freq[value] == count) 
                    {
                        cout << value << "\n";
                        freq[value]--;
                        if (freq[value] == 0) 
                        {
                            freq.erase(value); 
                        }
                        break;
                    }
                    maxHeap.pop();
                }
            }
        }
    }

    return 0;
}
