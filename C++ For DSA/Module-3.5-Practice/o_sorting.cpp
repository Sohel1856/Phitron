#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    char s;
    int cunt[123] ={0} ;
    for(int i=0;i<n;i++)
    {
        
        cin>>s;
       
        cunt[s]++;
    }

     for(int i = 'a'; i <='z'; i++) 
     {
        if(cunt[i])
        {
            for(int j = 0; j < cunt[i]; j++)
         {
          
            cout <<(char) i;
        }

        }
        
    }
    cout << endl;
    return 0;
}