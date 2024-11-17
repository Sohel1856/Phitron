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
int main()
{
    int a=10;
    node obj=node(a);
    cout<<obj.val;

    return 0;
}