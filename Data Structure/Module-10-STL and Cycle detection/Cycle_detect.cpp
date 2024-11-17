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
int main()
{
    node* head=new node(10);
    node* a=new node(20);
    node* b=new node(30);
    node* c=new node(40);
   // node* d=new node(50);

    //connection;
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=NULL;
    //d->next=a;
    bool flag =  false;
    node* slow = head;
    node* fast = head;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
        {
            flag=true;
            break;
        }
    }
    if(flag==true)
    {
        cout<<"Cycle detected"<<endl;
    }
    else
    {
        cout<<"No cycle"<<endl;
    }
    
   
    return 0;
}