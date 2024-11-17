#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if(n == 0) 
    {
        cout << "UNSTABLE\n";
        return 0;
    }

    int A[n];
    for(int i = 0; i < n; i++) cin >> A[i];

    ll Sum = 0, sum1 = 0;
    for(int i = 0; i < n; i++) sum1 += A[i];

    for(int i = 0; i < n; i++) {
        Sum += A[i];
        sum1 -= A[i];

        if(Sum == (sum1+A[i])) {
            cout << Sum << " " << i+1 << "\n";
            return 0;
        }
    }

    cout << "UNSTABLE\n";

    return 0;
}