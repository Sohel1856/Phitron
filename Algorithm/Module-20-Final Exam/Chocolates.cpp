
#include<bits/stdc++.h>
using namespace std;

int main()
{
        int T;cin>>T;
        while(T--)
        {
                int N,S=0;
                cin>>N;
                int A[N];
                for (int i = 0; i < N; i++)
                {
                        cin>>A[i];
                        S += A[i];
                }
                if(S%2==0)
                {
                        int Sum = S/2;
                        bool DP[N+1][Sum+1];

                        DP[0][0]=true;

                        for (int i = 1; i <= Sum; i++)
                        {
                                DP[0][i] = false;
                        }
                        
                        for (int i = 1; i <= N; i++)
                        {
                                for (int j = 0; j <= Sum; j++)
                                {
                                        if(A[i-1] <= j)
                                        DP[i][j]=DP[i-1][j-A[i-1]] || DP[i-1][j];
                                        else 
                                        DP[i][j] = DP[i-1][j];
                                }
                        }
                        if(DP[N][Sum]) cout<<"YES"<<endl;
                        else cout<<"NO"<<endl;
                }
                else 
                cout<<"NO"<<endl;
        }
        return 0;
}
