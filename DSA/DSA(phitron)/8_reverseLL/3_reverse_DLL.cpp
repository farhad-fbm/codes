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
void takeInputs (Node*& head, Node*& tail){
   int val;
   while(true){
      cin>> val;
      if(val == -1)break;
      Node* newNode = new Node(val);
      if(head == NULL){
         head = newNode;
         tail = newNode;
      }
      else{
         tail->next = newNode;
         newNode->prev = tail;
         tail=newNode;
      }

   }
}
void printNormalDLL(Node* head){
   for(Node* i=head; i!=NULL; i=i->next) cout<<i->val<<" ";
   cout<<endl;
}
void reverseDLL(Node* head, Node* tail){
   Node* i =head;
   Node* j = tail;

   while(i!=j && i->next != j){
      swap(i->val, j->val);
      i=i->next;
      j=j->prev;
   }
   swap(i->val,j->val); /* for Even nodes */
}

int main(){
   Node* head = NULL;
   Node* tail = NULL;
   takeInputs(head, tail);
   reverseDLL(head, tail);
   printNormalDLL(head);
   return 0;
}