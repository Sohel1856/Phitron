#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    
    while (T--) 
    {
        int N, K;
        cin >> N >> K;
        
        string A, B;
        cin >> A >> B;
        
        int diff_count = 0; 
        for (int i = 0; i < N; ++i) 
        {
            if (A[i] != B[i]) 
            {
                ++diff_count;
            }
        }
        
        if (diff_count <= K) 
        {
            cout << "YES"<<endl;
        } 
        else 
        {
            cout << "NO"<<endl;
        }
    }

    return 0;
}
