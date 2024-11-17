// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     while (n--)
//     {
//         int a;
//         int ar[a];
//         for(int i=0;i<a;i++)
//         {
//             cin>>ar[i];
//         }
//         sort(ar,ar+a);
//          for(int i=0;i<a;i++)
//         {
//             cout<<ar[i]<<" ";
//         }
//         cout<<endl;

//     }
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;  
    while (T--) 
    {
        int N;
        cin >> N;  

        int* ar = new int[N];  
        for (int i = 0; i < N; i++) 
        {
            cin >> ar[i]; 
        }
        sort(ar, ar + N);

        int* temp = new int[N];
        int j = 0;
        if (N > 0)
        {
            temp[j++] = ar[0];
        }
        for (int i = 1; i < N; i++) 
        {
            if (ar[i] != ar[i - 1]) 
            {
                temp[j++] = ar[i];
            }
        }
        for (int i = 0; i < j; i++) 
        {
            cout << temp[i] << " ";
        }
        cout << endl;

        // // Free the allocated memory
        // delete[] ar;
        // delete[] temp;
    }

    return 0;
}
