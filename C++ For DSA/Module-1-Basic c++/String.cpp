#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    char s[100];
    cin>>s;
    cout<<s<<" "<<strlen(s)<<endl;
    int n;
    cin>>n;
    getchar();
    cin.getline(s,100);
    cout<<n<<endl;
    cout<<s<<endl;
    return 0;
}