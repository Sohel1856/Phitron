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
int main()
{
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
    if(pos>=size(head))
    {
        cout<<"Invalid"<<endl;
    }
    else
    {
         insert_at_position(head,pos,val);
    }
    normal_print(head);
    reverse_print(tail);
    return 0;
}