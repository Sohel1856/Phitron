#include<bits/stdc++.h>
using namespace std;
int main()
{
  
//     stack<int>st;
//     st.push(10); 
//     st.push(20);
//     cout<<st.top()<<endl; 
//     st.pop();
//     cout<<st.top()<<endl; 
//     st.pop();
//    if(!st.empty()) cout<<st.top()<<endl;
   
//    if(!st.empty()) 
//     st.pop();

   stack<int>st1;
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
     int x;
     cin>>x;
     st1.push(x);
   }
   while (!st1.empty())
   {
     cout<<st1.top()<<endl;
     st1.pop();
   }
   

    return 0;
}