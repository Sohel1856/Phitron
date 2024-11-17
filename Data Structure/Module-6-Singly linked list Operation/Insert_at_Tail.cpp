#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int val;
    node* next;
    node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(node *&head, int v) 
{
    node *newnode = new node(v);
    if (head == NULL) 
    {
        head = newnode;
        return;
    }
    node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}

void print_linked_list(node *head)
{
    cout<<"Your linkedlist:";
    node *tmp = head;
    while (tmp != NULL)
     {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main() {
    node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print linked list" << endl;
        cout << "Option 3: Terminate" << endl;
    int op;
    cin >> op;
    if (op == 1) 
    {
        cout<<"ENter a value:";
        int v;
        cin >> v;
        insert_at_tail(head, v);
    }
    else if(op==2)
    {
        print_linked_list(head);
    }
    else if(op==3)
    {
        break;
    }
    }
    
    return 0;
}
