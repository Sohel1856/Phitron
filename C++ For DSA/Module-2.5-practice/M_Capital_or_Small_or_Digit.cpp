#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin>>x;
    if('0'<=x && x<='9')
    {
        cout<<"IS DIGIT"<<endl;
    }
    else if('A'<= x && x<='Z')
    {
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
    }
    else 
    {
        cout<<"ALPHA"<<endl<<"IS SMALL";
    }
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char a;
//     cin>>a;
//     if(a>='0' && a<='9')
//     {
//         cout<<"IS DIGIT";
//     }
//     else if(a>='A' && a<='Z')
//     {
//         cout<<"ALPHA"<<endl;
//         cout<<"IS CAPITAL";
//     }
//     else

//     {
//         cout<<"ALPHA"<<endl;
//         cout<<"IS SMALL";
//     }
//     return 0;
// }