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
void print_linked_list(node* head)
{
    node* tmp= head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void insert_at_tail(node* &head,node* &tail,int val)
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
void sort_list(node* head)
{
    node* tmp=head;
    int flag=1;
    if(tmp==NULL|| tmp->next==NULL)
    {
        flag=1;
    }
    while(tmp->next!=NULL)
    {
        if(tmp->val>tmp->next->val)
        {
            flag=0;
            break;
            
        }
        tmp=tmp->next;
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
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
        insert_at_tail(head,tail,val);
    }
    sort_list(head);
    //print_linked_list(head);
    return 0;
}
