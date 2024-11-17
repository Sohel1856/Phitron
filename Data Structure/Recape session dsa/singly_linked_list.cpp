#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
      
      Node(int val)
      {
        this->val=val;
        this->next=NULL;
      }
};
void insertHead(int val,Node* &head)
{
    Node* newNode = new Node(val);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    newNode->next=head;
    head = newNode;
}

void insertTail(int val,Node* &head)
{
    Node* newNode= new Node(val);

    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node* temp= head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}
void insertAny(int pos,int val,Node* &head)
{
    if(pos==0)
    {
        insertHead(val,head);
    }
    Node* newNode= new Node(val);
    Node* temp = head;
    for(int i=0 ; i<pos-1;i++)
    {
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}
void printlist(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main()
{
    //mannual input
    // Node* a= new Node(1);
    // Node* b= new Node(2);
    // Node* c= new Node(3);

    // a->next=b;
    // b->next=c;

    Node* head=NULL;
    while(true)
    {
        int val;
        cin>>val;

        if(val==-1) break;
        //insertTail(val,head);
         insertHead(val,head);
    }
    //1insertHead(3,head);
    insertAny(1,10,head);
    insertAny(3,20,head);
    printlist(head);
    return 0;
}
