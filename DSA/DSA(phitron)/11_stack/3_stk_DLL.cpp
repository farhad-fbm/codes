#include <bits/stdc++.h>
using namespace std;
class Node{
   public:
   int val;
   Node* next;
   Node* prev;
   Node(int val){
      this->val = val;
      next=NULL;
      prev=NULL;
   }
};
class myStack{
   public:
   Node* head=NULL;
   Node* tail=NULL;
   int sz=0; /*track size for O(1)*/

   void push(int val){
      sz++; /*size increment*/
      Node* newNode = new Node(val);
      if(head==NULL){
         head=newNode;
         tail=newNode;
      }
      else{
         tail->next=newNode;
         newNode->prev=tail;
         tail=newNode;
      }
   }
   void pop(){
      sz--;/*size decrement*/
      Node* deleteNode = tail;
      tail = tail->prev;
      delete deleteNode;
      if(tail==NULL)head=NULL;
      else tail->next=NULL;

   }
   int top(){
      return tail->val;
   }
   int size(){
      return sz;
   }
   bool empty(){
      if(sz==0)return true;
      else return false;
   }
};

int main(){
   myStack st;
   int n; cin>>n;
   for(int i=0; i<n; i++){
      int val; cin>>val;
      st.push(val);
   }
   while(!st.empty()){
      cout<<st.top()<<endl;
      st.pop();
   }
   return 0;
}