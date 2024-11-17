#include<bits/stdc++.h>
using namespace std;

class my_queue
{
  public:
  list<int>l;
  void push(int val)
  {
    l.push_back(val);

  }
  void pop()
  {
   l.pop_front();
  }
  int front()
  {
    return l.front();
  }
  int size()
  {
    return l.size();
  }
  bool empty()
    {
        return l.empty();
    }
};
int main()
{
    my_queue Q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        Q.push(x);
    }
    while (!Q.empty())
    {
       cout<<Q.front()<<endl;
       
       Q.pop();
    }
    if(!Q.empty())
    {
        cout<<Q.front();
    }
    return 0;
}