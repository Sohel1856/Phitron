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
void even_odd(node*head)
{
    
    node*tmp=head;
    int Odd_count=0;
    int even_count=0;
    while(tmp!=NULL)
    {
        if(tmp->val%2==0)
        {
            even_count++;
        }
        else
        {
            Odd_count++;

        }
        tmp=tmp->next;
    }
    cout<<"Odd numbers "<<Odd_count<<endl;
    cout<<"Even numbers "<<even_count<<endl;
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
    even_odd(head);
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;
//     node (int val) {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void insert_tail(node* &head, node* &tail, int val) {
//     node* newnode = new node(val);
//     if (head == NULL) {
//         head = newnode;
//         tail = newnode;
//         return;
//     }
//     tail->next = newnode;
//     tail = newnode;
// }

// void even_odd(node* head) {
//     node* tmp = head;
//     int Odd_count = 0;
//     int even_count = 0;  // Initialize even_count to 0
//     while (tmp != NULL) {
//         if (tmp->val % 2 == 0) {
//             even_count++;
//         } else {
//             Odd_count++;
//         }
//         tmp = tmp->next;
//     }
//     cout << "Odd numbers " << Odd_count << endl;
//     cout << "Even numbers " << even_count << endl;
// }

// int main() {
//     node* head = NULL;
//     node* tail = NULL;
//     int val;
//     while (true) {
//         cin >> val;
//         if (val == -1) break;
//         insert_tail(head, tail, val);
//     }
//     even_odd(head);
//     return 0;
// }
