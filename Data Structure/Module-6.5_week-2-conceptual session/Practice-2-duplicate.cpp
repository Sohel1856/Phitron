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
    node *tmp = head;
    unordered_set<int> v;
    bool falg = false;
    while (tmp != NULL)
    {
        if (v.find(tmp->val) != v.end())
        {
            falg = true;
            break;
        }
        v.insert(tmp->val);
        tmp = tmp->next;
    }
    if (falg == 1)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
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