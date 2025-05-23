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
void insert_at_tail(node*&head,int v)
{
    node* newnode= new node(v);
    if(head==NULL)
    {
        head=newnode;
        cout<<endl<<"inserted at head"<<endl<<endl;
        return;
    }
    node*tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
        //tmp ekhn last node ase
    }
    tmp->next=newnode;
    cout<<endl<<"inserted at Tail"<<endl<<endl;   
}
void printlinked_list(node* head)
{
    cout<<endl;
    cout<<"your linkedlist:";
    node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl<<endl;
}
void insert_at_position(node*head,int pos,int v)
{
    node*newnode=new node(v);
    node*tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp = tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    cout<<endl<<endl<<"Inserted position  "<<pos<<endl<<endl;
}
void insert_at_head(node *&head,int v)
{
    node *newnode = new node (v);
    newnode->next= head;
    head = newnode;
    cout<<endl<<"Inserted at head"<<endl<<endl;
}
void delete_at_any_pos(node* head,int pos)
{
    node*tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    node* deletenode=tmp->next;
    tmp->next=tmp->next->next;
    delete deletenode;
    cout<<"deleted positon "<<pos<<endl<<endl;
}
void delete_head(node* &head)
{
    node* deletenode=head;
    head=head->next;
    delete deletenode;
    cout<<"deleted head "<<endl<<endl;
}
int main()
{
    node * head =NULL;
    while (true)
    {
    cout<<"option:1 insert a tail"<<endl;
    cout<<"option:2 Print linked list"<<endl;
    cout<<"option:3 Inert at any position"<<endl;
    cout<<"option:4 Inert at any head"<<endl;
    cout<<"option:5 Delete at any Position"<<endl;
    cout<<"option:6 Deleted head"<<endl;
    cout<<"option:7 terminate"<<endl;
    int op;
    cin>>op;
    if(op==1)
    {
        cout<<"please enter value: ";
        cout<<endl;
        int v;
        cin>>v;
        insert_at_tail(head,v);
    }
    else if(op==2)
    {
       printlinked_list(head); 
    }
    else if(op==3)
    {
        int pos,v;
        cout<<"Enter pos:";
        cin>>pos;
        cout<<"Enter value:";
        cin>>v;
         if(pos==0)
        {
           insert_at_head(head,v);
        }
        else 
        {
            insert_at_position(head,pos,v);
        }
    }
    else if(op==4)
    {
        int v;
        cout<<"enter value: ";
        cin>>v;
        insert_at_head(head,v);

    }
    else if(op==5)
    {
        int pos;
        cout<<"Enter the pos: ";
        cin>>pos;
        if(pos==0)
        {
            delete_head(head);
        }
       else
       {
         delete_at_any_pos(head,pos);
       }
    }
    else if(op==6)
    {
        delete_head(head);
    }
    else if(op==7)
    {
        break;
    }
    }
    return 0;
}