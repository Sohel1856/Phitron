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
void Searching_print(node*head,int x)
{
    int flag=0;
    node*tmp=head;
    while(tmp!=NULL)
    {
        if(tmp->val==x)
        {
            flag=1;
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
        insert_tail(head,tail,val);
    }
    int x;
    cin>>x;
   Searching_print(head,x);
    return 0;
}
//Linear search-> O(N)
//Sort-> O(NlogN)
//Binary search-> O(logN)
//-------------------------
//              ->O(N)+O(logN)=O(NlogN)