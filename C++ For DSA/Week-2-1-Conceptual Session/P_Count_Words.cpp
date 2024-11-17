#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    
    for (int i = 0; i < s.length(); i++) 
    {
        if (ispunct(s[i]))
        {
            s[i] = ' ';
        }
    }
     stringstream ss(s);
     string world;
     int cnt=0;
     while(ss>>world)
     { 
        cnt++;
     }
     cout<<cnt<<endl;
    
    return 0;
}