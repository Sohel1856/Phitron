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
        return;
    }
    node*tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
        //tmp ekhn last node ase
    }
    tmp->next=newnode;
}
void printlinked_list(node* head)
{
    cout<<endl;
    //cout<<"your linkedlist count:";
    node*tmp=head;
    int cnt=0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
   
    cout<<cnt<<endl;
}

int main()
{
    int v;
    node* head=NULL;
    while (true)
    {
        cin>>v;
        if(v==-1) break;
        insert_at_tail(head, v);
    }
    printlinked_list(head);
    
    return 0;
}