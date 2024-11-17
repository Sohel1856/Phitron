#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
     stringstream ss(s);
     string world;
     int cnt=0;
     while(ss>>world)
     {
        for(char c:world)
        {
            cout<<c<<" ";
        }
        cout<<endl;
        cnt++;
     }
     cout<<cnt<<endl;
    
    return 0;
}