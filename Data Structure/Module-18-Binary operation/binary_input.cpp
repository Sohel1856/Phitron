#include<bits/stdc++.h>
using namespace std;
class Node
    {
        public:
           int val;
           Node* left;
           Node* right;
        Node (int val)
        {
            this->val=val;
            this->left=NULL;
            this->right=NULL;
    
        }
    };
Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if(val==-1)
        root=NULL;
    else
        root=new Node(val);
    queue<Node*>q;
    if(root) q.push(root);
    while(!q.empty())
    {
        // 1.ber kore ante hbe
        Node* P= q.front();
        q.pop();
        //jabotiyo ja kaj ase korete hbe
        int l,r;
        cin>>l>>r;
        Node* myLeft;
        Node* myRight;
        if(l==-1)
            myLeft=NULL;
        else
            myLeft=new Node(l);
        if(r==-1)
            myRight=NULL;
        else
            myRight=new Node(r);
        P->left=myLeft;
        P->right=myRight;
        
        //3.children gulo ke push lkoro
        if(P->left)
               q.push(P->left);
        if(P->right)
               q.push(P->right); 
    }
    return root;
}
void level_order(Node* root)
{
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        // 1.line theke ana
        Node* f=q.front();
        q.pop();

        //2. jabotiyo ja kaj ase korte hbe
        cout<<f->val<< " ";

        //3. children gulo ke line e dewa
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
}
int main()
{
    Node* root=input_tree();
    level_order(root);
    return 0;
}