#include <bits/stdc++.h>
using namespace std;
bool canReachTarget(int N, int M,vector<int>& marks) 
{
     int target = 1000 - M;
     if (target == 0) return true;
    vector<bool> dp(target + 1, false);
    dp[0] = true;
    
    for (int mark : marks) 
    {
        for (int i = target; i >= mark; --i) 
        {
            if(dp[i - mark])
            {
                dp[i]=true;
            }
        }
    }
    return dp[target];
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, M;
        cin >> N >> M;
        
        vector<int> marks(N);
        for (int i = 0; i < N; ++i) {
            cin >> marks[i];
        }
        
            if (canReachTarget(N,M,marks)) 
            {
                cout << "YES" << endl;
            } else 
            {
                cout << "NO" << endl;
            }
    }
    
    return 0;
}
