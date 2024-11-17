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
void delete_value(node* &head,int x)
{
    if(head->val == x)
    {
        node* deletenode= head;
        head = head->next;
        delete deletenode;
    }
    node*tmp=head;
    while(tmp->next!=NULL)
    {
        if(tmp->next->val==x)
        {
             node*deletenode=tmp->next;
             tmp->next=tmp->next->next;  
             delete deletenode;
             break;
        }
        tmp=tmp->next;
    }
    cout<<endl;
}
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
    int x;
    cin>>x;
    delete_value(head,x);
    print_linked_list(head);
    return 0;
}