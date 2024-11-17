#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node* next;
    node(int val)
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
int size(node* head)
{
    node* tmp=head;
    int cnt=0;
    while (tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;

}
void insert(node*head,int v,int pos)
{
    node* newnode= new node(v);
    node* tmp =head;
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
        
    }
    //tmp = pos-1 e ashse
    
    newnode->next=tmp->next;
    tmp->next=newnode;
}

void insert_head(node* &head,int v)
{
    node*newnode=new node(v);
    newnode->next=head;
    head=newnode;
   
}
void insert_tail(node* &head,node* &tail,int v)
{
    node* newnode = new node(v);
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
    node* head=new node(10);
    node* a=new node(20);
    node* b=new node(30);
    node* c=new node(40);
    node* d=new node(50);
    node* tail=d;

    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    
    print_linked_list(head);
    cout<<"Tail-> "<<tail->val<<endl;

    int pos,v;
    cin>>pos>>v;
    if(pos>size(head))
    {
        cout<<"Invalid Index"<<endl;
    }
    else if(pos==0)
    {
        insert_head(head,v);
    }
    else if(pos==size(head))
    {
        insert_tail(head,tail,v);
    }
    else
    {
        insert(head,v,pos);
    }
    print_linked_list(head);

    cout<<"Tail-> "<<tail->val<<endl;
   
   // cout<<a->next->val<<endl;

    return 0;
}

