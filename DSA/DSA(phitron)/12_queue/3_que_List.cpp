#include <bits/stdc++.h>
using namespace std;

class myQueue{
   public:
   list <int> li;

   void push(int val){
      li.push_back(val);
   }
   void pop(){
      li.pop_front();
   }
   int front(){
      return li.front();
   }
   int size(){
      return li.size();
   }
   bool empty(){
      // if(li.size()==0)return true;
      // else return false;
      return li.empty();
   }
};

int main(){
   myQueue q;
   int n; cin>>n;
   for(int i=0; i<n; i++){
      int val; cin>>val;
      q.push(val);
   }
   while(!q.empty()){
      cout<<q.front()<<endl;
      q.pop();
   }
   return 0;
}