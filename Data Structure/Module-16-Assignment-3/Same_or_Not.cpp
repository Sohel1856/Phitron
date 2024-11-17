#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    queue<int>q;
   
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    if(st.size()==q.size())
    {
        bool flag=true;
        {
            while(!st.empty())
            {
                if(st.top()!=q.front())
                {
                    flag=false;
                    break;
                }
                st.pop();
                q.pop();
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}