// #include <iostream>
// #include <cmath>
// using namespace std;

// int Div(int n)
// {
//     for (int i = n / 2; i > 0; i--)
//     {
//         if (n % i == 0)
//             return i;
//     }
//     return 1;
// }
// int cnt(int h)
// {
//     int B = 0;
//     while (h > 1)
//     {
//         h = Div(h);
//         B++;
//     }
//     return B;
// }

// int main()
// {
//     int T;
//     cin >> T;

//     while (T--)
//     {
//         int H, K;
//         cin >> H >> K;

//         int mxM = 0;

//         for (int m = 1; m <= K; ++m)
//         {
//             int HL = H * m;
//             int D = cnt(HL);
//             mxM = max(mxM, D);
//         }

//         cout << mxM << endl;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> d;

int Div(int n)
{
    if (d.find(n) != d.end())
    {
        return d[n];
    }
    for (int i = n / 2; i > 0; i--)
    {
        if (n % i == 0)
        {
            d[n] = i;
            return i;
        }
    }
    d[n] = 1;
    return 1;
}

unordered_map<int, int> C;

int cnt(int h)
{
    if (C.find(h) != C.end())
    {
        return C[h];
    }
    int B = 0;
    while (h > 1)
    {
        h = Div(h);
        B++;
    }
    C[h] = B;
    return B;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;

    while (T--)
    {
        int H, K;
        cin >> H >> K;

        int mxM = 0;

        for (int m = 1; m <= K; ++m)
        {
            int HL = H * m;
            int D = cnt(HL);
            mxM = max(mxM, D);
        }

        cout << mxM << endl;
    }

    return 0;
}
