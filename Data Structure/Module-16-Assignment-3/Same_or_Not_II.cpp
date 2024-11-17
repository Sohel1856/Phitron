#include<bits/stdc++.h>
using namespace std;
class my_stack
{
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
class node
{
    public:
    int val;
    node* next;
    node (int val)
    {
        this->val=val;
        this->next=NULL;

    }
};
class my_queue
{   
    public:
     node* head=NULL;
     node* tail=NULL;
     int sz=0;
    void push(int val)
    {
        sz++;
       node* newnode = new node(val);
       if(head==NULL)
       {
        head=newnode;
        tail=newnode;
        return;
       }
       tail->next=newnode;
       tail=tail->next;

    }
    void pop()
    {
        sz--;
        node* deletenode= head;
        head=head->next;
        delete deletenode;
        if(head==NULL)
        {
            tail=NULL;
        }
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz==0)
        {
            return true;
        }
        else return false;
    }


};
int main()
{
    my_stack st;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    my_queue q;
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