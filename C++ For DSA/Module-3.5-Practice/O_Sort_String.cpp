// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     char s[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>s[i];
//     }
//     int cunt[26]={0};
//     for(int i=0;i<=n;i++)
//     {
//         cunt[s[i]-'a']++;
//     }

//      for(int i = 0; i < 26; i++) 
//      {
//         for(int j = 0; j < cunt[i]; j++)
//          {
//             cout << char('a' + i);
//         }
//     }
//     return 0;
// }
#include <iostream>
#include <string>

using namespace std;



int main()
{
    int N;
    cin >> N;

    int freq[26] = {0};

    
    for ( int i = 0; i < N; i++)
    {
        char x;
        cin >> x;
        freq[(int)x - 'a']++;
    }

    
    for ( int i = 0; i < 26; i++)
    {
        for(int j=0; j<freq[i]; j++)
        {
            cout << (char)(i + 'a');
        }
    }

    cout << endl;

    return 0;
}