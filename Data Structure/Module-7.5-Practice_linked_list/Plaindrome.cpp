#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
   ListNode* prev;
   ListNode(int val) 
   {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
   }
};

void insert_at_tail(ListNode*& head,ListNode*& tail, int val) 
{
   ListNode* newListNode = new ListNode(val);
    if (tail == NULL) 
    {
        head = newListNode;
        tail = newListNode;
    } 
    else
    {
        tail->next = newListNode;
        newListNode->prev = tail;
        tail = newListNode;
    }
}

bool isPalindrome(ListNode* head, ListNode* tail) 
{
    if (head == NULL || tail == NULL)
        return true;

    while (head != NULL && tail != NULL) 
    {
        if (head->val != tail->val)
        {
            return false;
        }
            
        head = head->next;
        tail = tail->prev;
    }
    return true;
}

int main() {
   ListNode* head = NULL;
    ListNode* tail = NULL;
    int val;
    
    
    while (true) {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }
    
    
    if (isPalindrome(head, tail)) 
    {
        cout << "YES" << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }
    
    return 0;
}