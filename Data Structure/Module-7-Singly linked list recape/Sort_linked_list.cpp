#include<bits/stdc++.h>
using namespace std;
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
void print_linked_list(node*head)
{
    node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void insert_tail(node* &head,node* &tail,int val)
{
    node* newnode = new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
int main()
{
    node* head=NULL;
    node* tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        insert_tail(head,tail,val);
    }
    for(node* i=head;i->next!=NULL;i=i->next)
    {
        for(node* j=i->next;j!=NULL;j=j->next)
        {
            //if(i->val>j->val) // ascending sorrt
            if(i->val<j->val)// descending sorrt
            {
                swap(i->val,j->val);
            }
            //cout<<i->val<<" "<<j->val<<endl;
        }
        cout<<endl;
       // cout<<i->val<<endl;
    }
    print_linked_list(head);
    return 0;
}