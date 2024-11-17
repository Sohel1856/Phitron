#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    priority_queue<int> pq; // MAXHeap
    // priority_queue<int, vector<int>, greater<int>> pq; // Minheap
    pq.push(5);
    pq.push(2);
    pq.push(3);
    pq.push(2);
    pq.push(1);
    pq.push(2);

    // cout << pq.top() << endl;
    // pq.pop();
    // cout << pq.top() << endl;
    // pq.pop();
    // cout << pq.top() << endl;
    // pq.pop();
    // cout << pq.top() << endl;

    // cout << "Size--" << pq.size() << endl;

    while (!pq.empty())
    {
        int val = pq.top();
        pq.pop();
        cout << val << endl;
    }

    return 0;
}