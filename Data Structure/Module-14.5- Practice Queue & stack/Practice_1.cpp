#include<bits/stdc++.h>
using namespace std;
class my_stack
{
    public:
    public:
    list<int>l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int size()
    {
        return l.size();
    }
    int top()
    {
        return l.back();
    }
    bool empty()
    {
        if (l.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    my_stack st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
   my_stack st1;
     int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        st1.push(x);
    }
    if(st.size()==st1.size())
    {
        bool flag=true;
        while(!st.empty())
        {
            if(st.top()!=st1.top())
            {
                flag=false; 
                break;
            }
            st.pop();
            st1.pop();
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    else
    cout<<"NO"<<endl;



    return 0;
}