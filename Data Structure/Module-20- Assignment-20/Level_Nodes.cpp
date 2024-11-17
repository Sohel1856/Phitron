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
vector<int> level_Nodes(Node *root, int X)
{
        vector<int> V;
        queue<pair<Node *, int>> q;
        q.push({root, 0});
        while (!q.empty())
        {
                pair<Node *, int> pr = q.front();
                Node *node = pr.first;
                int level = pr.second;
                q.pop();

                if (level == X)
                        V.push_back(pr.first->val);

                if (node->left)
                        q.push({node->left, level + 1});
                if (node->right)
                        q.push({node->right, level + 1});
        }
        return V;
}

int main()
{
    Node* root=input_tree();
  int X;
        cin >> X;
        vector<int> V = level_Nodes(root, X);
        if (!V.empty())
        {
                for (int i : V)
                        cout << i << " ";
        }
        else
                cout << "Invalid";
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
// vector<int> find_level(Node *root, int x)
// {
//         vector<int> v;
//         queue<pair<Node *, int>> q;
//         q.push({root, 0});
//         while (!q.empty())
//         {
//                 pair<Node *, int> pr = q.front();
//                 Node *node = pr.first;
//                 int level = pr.second;
//                 q.pop();

//                 if (level == x)
//                         v.push_back(pr.first->val);

//                 if (node->left)
//                         q.push({node->left, level + 1});
//                 if (node->right)
//                         q.push({node->right, level + 1});
//         }
//         return v;
// }
// int main()
// {
//         Node *root = input_tree();
//         int x;
//         cin >> x;
//         vector<int> v = find_level(root, x);
//         if (!v.empty())
//         {
//                 for (int i : v)
//                         cout << i << " ";
//         }
//         else
//                 cout << "Invalid";
//         return 0;
// }