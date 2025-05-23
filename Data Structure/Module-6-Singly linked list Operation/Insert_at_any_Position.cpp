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
    node* newnode=new node(v);
    if(head==NULL)
    {
        head=newnode;
        cout<<endl<<"Inserted head:"<<endl<<endl;
        return;
    }
    node* tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
        //tmp ekhn last node e ase
    }
    tmp->next=newnode;
    cout<<endl<<"Inserted a tail"<<endl<<endl;
}
void print_linked_list(node* head)
{
    cout<<endl;
    cout<<"your linked list:";
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
    node*newnode = new node(v);
    node*tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    cout<<endl<<endl<<"Inserted at position"<<pos<<endl;
}

int main()
{
    node*head=NULL;
    while (true)
    {
        cout<<"option- 1: Insert a Tail:"<<endl;
        cout<<"option- 2: Print link list:"<<endl;
        cout<<"option- 3: Inserted at any position:"<<endl;
        cout<<"option- 4: Terminate:"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"Please Enter value:"<<endl;
            int v;
            cin>>v;
            insert_at_tail(head,v);
        }
        else if(op==2)
        {
            print_linked_list(head);
        }
        else if(op==3)
        {
            int pos,v;
            cout<<"Insert position:";
            cin>>pos;
            cout<<"Enter the value:";
            cin>>v;
            insert_at_position(head,pos,v);
        }
        else if(op==4)
        {
            break;
        }

    }
    return 0;
}