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
void print_list(node* head)
{
   node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

int sz=0;
void insert_tail(node* &head,int val)
{
    sz++;
    node* newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    node* tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
   tmp->next=newnode;
   newnode->prev=tmp;
}
//O(n) size ber kora
void size_list(node*head)
{
    node* tmp= head;
    int cnt=0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    cout<<cnt<<endl;
}
//O(1) e size count

void size_list1(node*head)
{
    cout<<sz<<endl;
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
        insert_tail(head,val);
    }
    print_list(head);
    size_list(head);//O(n)
    size_list1(head);//O(1)
    return 0;
}