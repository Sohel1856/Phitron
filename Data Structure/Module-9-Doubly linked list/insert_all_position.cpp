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
void insert_at_position(node* head,int pos,int val)
{
   node* tmp=head;
   node*newnode= new node(val);
   for(int i=1;i<=pos-1;i++) 
   {
    tmp=tmp->next;
   }
   newnode->next=tmp->next; //100->30
   tmp->next=newnode; //20->100
   newnode->next->prev=newnode; //100<-30 //newnode->next manee 30 karon 30 er address newnode next e ase
   newnode->prev=tmp; //20<- 100
}
int size(node* head)
{
    node*tmp=head;
    int cnt=0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
void insert_head(node* &head,node* &tail,int val)
{
    node* newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;

    head=newnode;
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
    // node* head=NULL;
    // node* tail=NULL;
    node* head=new node(10);
    node* a=new node(20);
    node* b=new node(30);
    node* c=new node(40);
    node* tail = c;

    //connection;
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;

    int pos,val;
    cin>>pos>>val;
    if(pos> size(head))
    {
        cout<<"Invalid"<<endl;
    }
    
     else if(pos==0)
    {
         insert_head(head,tail,val);
    }
    else if(pos == size(head))
    {
        insert_tail(head,tail,val);
    }
    else
    {
        insert_at_position(head,pos,val);
    }
   
    normal_print(head);
    reverse_print(tail);
    return 0;
}