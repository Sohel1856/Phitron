#include<bits/stdc++.h>
class node
{
    public:
    int val;
    node* next;
    node* prev;
    node (int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;

    }
};
using namespace std;
class my_stack
{
    public:
    node* head=NULL;
    node* tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        node* newnode= new node(val);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        newnode->prev=tail;
        tail->next=newnode;
        tail=tail->next;
    }
    void pop()
    {
        sz--;
       node* deletenode=tail;
       tail=tail->prev;
       if(tail==NULL)
       {
        head=NULL;
       }
       else
       {
        tail->next=NULL;
       }
       delete deletenode;
    }
    int size()
    {
        return sz;
    }
    int top()
    {
       return tail->val;
    }
    bool empty()
    {
        if (sz == 0)
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
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}