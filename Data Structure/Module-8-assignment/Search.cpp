#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void searching(Node *head, int x)
{
    if (head == NULL)
    {
        cout << 0 << endl;
        return;
    }
    Node *tmp = head;
    int i = 0;

    while (tmp != NULL)
    {
        if (tmp->val == x)
        {
            cout << i << endl;
            return;
        }
        i++;
        tmp = tmp->next;
    }

    cout << -1 << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int val;
        while (true)
        {
            cin >> val;
            if (val == -1)
                break;
            insert_tail(head, tail, val);
        }
        int V;
        cin >> V;
        searching(head, V);
    }
    return 0;
}