#include<bits/stdc++.h>
using namespace std;
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
void normal_print(node* head)
{
   node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void reverse_print(node* tail)
{
   node*tmp=tail;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}

void insert_tail(node* &head,node* &tail,int val)
{
    node* newnode=new node(val);
    if(tail==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=tail->next;
}
int main()
{
    node* head=NULL;
    node* tail=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1) break;
        insert_tail(head,tail,val);
    }
    normal_print(head);
    reverse_print(tail);
    return 0;
}