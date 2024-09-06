#include <bits/stdc++.h>
using namespace std;
class Node {
   public:
   int val;
   Node* next;
   Node(int val){
      this->val = val;
      next = NULL;
   }
};
void takeInputs(Node*& head, Node*& tail){
   int val;
   while(true){
      cin>>val;
      if(val == -1) break;
      Node* newNode = new Node(val);
      if(head ==NULL){
         head = newNode;
         tail = newNode;
      }
      else{
         tail->next = newNode;
         tail=newNode;
      }
   }
}
void printRecursion(Node* head){
   if(head == NULL)return;
   cout<<head->val<<" ";
   printRecursion(head->next);
}
void printReverseRecursion(Node* head){
   if(head == NULL)return;
   printReverseRecursion(head->next);
   cout<<head->val<<" ";
}
int main(){
   Node* head = NULL;
   Node* tail = NULL;
   takeInputs(head, tail);
   printRecursion(head);cout<<endl;
   printReverseRecursion(head);
   return 0;
}