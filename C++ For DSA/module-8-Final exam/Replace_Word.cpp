#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();

    for (int i = 0; i < T; i++)
     {
        string s, x;
        getline(cin, s, ' ');
        getline(cin, x);
        while((s.find(x))!=-1)
        {
            s.replace(s.find(x),x.length(),"#");
        }
        cout<<s<<endl;
    
    }

    return 0;
}
