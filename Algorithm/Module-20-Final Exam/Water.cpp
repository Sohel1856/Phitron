#include <bits/stdc++.h>
using namespace std;

int main()
{
        int T;
        cin >> T;
        while (T--)
        {
                int N;
                cin >> N;
                vector<int> V(N);
                for (int i = 0; i < N; i++)
                {
                    cin >> V[i];
                    
                }
                vector<int> V_copy=V;
                sort(V_copy.begin(),V_copy.end());
                int FirstMax= V_copy[N-1]; 
                int SecondMax= V_copy[N-2];

                int Index1=-1,Index2=-1; 
                for (int i = 0; i < N; i++)
                {
                    if (V[i] == FirstMax && Index1 == -1)
                    {
                        Index1=i;
                    }
                    else if(V[i] == SecondMax && Index2 == -1)
                    {
                        Index2=i;
                    }
                }
                if(Index1<Index2)
                {
                    cout<<Index1<<" "<<Index2<<endl;
                }
                else
                {
                     cout<<Index2<<" "<<Index1<<endl;
                }
        }
        return 0;
}