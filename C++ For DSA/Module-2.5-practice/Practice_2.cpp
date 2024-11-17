#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    int *b=new int[m];
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    for(int i=n;i<m;i++)
    {
        cin>>b[i];
    }
    delete[]a;
    for(int i=0;i<m;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // Take input for array A
//     int n;
//     cin >> n;
//     int *a = new int[n];
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     // Take input for the size of array B
//     int m;
//     cin >> m;
//     int *b = new int[m];

//     // Copy elements from array A to array B
//     for (int i = 0; i < n; i++) {
//         b[i] = a[i];
//     }

//     // Delete array A
//     delete[] a;

//     // Take input for the rest of the elements of array B
//     for (int i = n; i < m; i++) {
//         cin >> b[i];
//     }

//     // Print array B
//     for (int i = 0; i < m; i++) {
//         cout << b[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }
