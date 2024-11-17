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
int size_list(node* head)
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
    int s1=size_list(head);
    head=NULL;
    tail=NULL;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        insert_tail(head,tail,val);
    }
    int s2=size_list(head);
    if(s1==s2)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    //print_linked_list(head);
    return 0;
}