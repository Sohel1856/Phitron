// #include<bits/stdc++.h>
// using namespace std;
// class Edge
// {
//     public:
//     int u,v,c;
//     Edge(int u,int v,int c)
//     {
//        this->u=u;
//        this->v=v;
//        this->c=c;
//     }
// };
// const int N=1e5+5;
// int dis[N];
// int main()
// {
//     int n,e;
//     cin>>n>>e;
//     vector<Edge>Edgelist;
//     while(e--)
//     {
//         int u,v,c;
//         cin>>u>>v>>c;
//         Edgelist.push_back(Edge(u,v,c));
//     }
//     for(int i=0;i<n;i++)
//     {
//         dis[i]=INT_MAX;
//     }
//     dis[0]=0;
//     for(int i=1;i<=n-1;i++)
//     {
//         for(Edge ed: Edgelist)
//         {
//             int u,v,c;
//             u=ed.u;
//             v=ed.v;
//             c=ed.c;
//             if(dis[u]<INT_MAX && dis[u]+c<dis[v])
//             {
//                 dis[v]=dis[u]+c;
//             }

//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<i<<" -> "<<dis[i]<<endl;
//     }
 
//     return 0;
// }

#include <iostream>
using namespace std;

class MyClass {

public:
 int* ptr;
    // Parameterized constructor
    MyClass() {
        ptr = new int;
       
    }

    // Move constructor
    MyClass(MyClass&& obj) 
    {
        ptr = new int;
        cout << "Move constructor called!" <<*ptr<< endl;
    }

    // Destructor
    ~MyClass() {
        delete ptr;
        cout << "Destructor called!" << endl;
    }
};

int main() 
{
    vector<MyClass>vec;
     vec.push_back(MyClass());
    return 0;
}
