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
void LeafNodes(Node* root, vector<int>& l) 
{
    if (root==NULL) return;
    if (root->left == NULL && root->right == NULL)
     {
        l.push_back(root->val);
    } 
    else
     {
        LeafNodes(root->left, l);
        LeafNodes(root->right, l);
    }
}

int main()
{
    Node* root=input_tree();
    vector<int> l;
    LeafNodes(root, l);
    
    sort(l.begin(), l.end(), greater<int>());
    for (int value : l) {
        cout << value << " ";
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//         int val;
//         Node *left;
//         Node *right;
//         Node(int val)
//         {
//                 this->val = val;
//                 this->right = NULL;
//                 this->left = NULL;
//         }
// };
// Node *input_tree()
// {
//         int val;
//         cin >> val;
//         Node *root;
//         if (val == -1)
//                 root = NULL;
//         else
//                 root = new Node(val);

//         queue<Node *> q;
//         if (root)
//                 q.push(root);
//         while (!q.empty())
//         {
//                 Node *p = q.front();
//                 q.pop();

//                 int l, r;
//                 cin >> l >> r;
//                 Node *myleft;
//                 if (l == -1)
//                         myleft = NULL;
//                 else
//                         myleft = new Node(l);
//                 Node *myright;
//                 if (r == -1)
//                         myright = NULL;
//                 else
//                         myright = new Node(r);

//                 p->left = myleft;
//                 p->right = myright;

//                 if (p->left)
//                         q.push(p->left);
//                 if (p->right)
//                         q.push(p->right);
//         }
//         return root;
// }
// vector<int> leaf_nodes(Node *root)
// {
//         vector<int> v;
//         if (root == NULL)
//                 return v;

//         if (root->left == NULL && root->right == NULL)
//                 v.push_back(root->val);
//         else
//         {
//                 if (root->left)
//                 {
//                         vector<int> leftLeaf = leaf_nodes(root->left);
//                         v.insert(v.end(), leftLeaf.begin(), leftLeaf.end());
//                 }
//                 if (root->right)
//                 {
//                         vector<int> rightLeaf = leaf_nodes(root->right);
//                         v.insert(v.end(), rightLeaf.begin(), rightLeaf.end());
//                 }
//         }
//         return v;
// }
// int main()
// {
//         Node *root = input_tree();
//         vector<int> v = leaf_nodes(root);
//         sort(v.begin(), v.end(), greater<int>());
//         for (int i : v)
//                 cout << i << " ";
//         return 0;
// }