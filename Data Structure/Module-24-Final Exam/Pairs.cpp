#include <bits/stdc++.h>
using namespace std;
bool compare(pair<string, int> &A, pair<string, int> &B)
{
    if (A.first == B.first)
    {
        return A.second > B.second;
    }
    return A.first < B.first;
}
int main()
{
    int N;
    cin >> N;
    vector<pair<string, int>> V(N);
    for (int i = 0; i < N; i++)
    {
        cin >> V[i].first >> V[i].second;
    }
    sort(V.begin(), V.end(), compare);
    for (auto i : V)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}