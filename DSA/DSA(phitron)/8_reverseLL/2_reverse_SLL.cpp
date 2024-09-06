#include <bits/stdc++.h>
using namespace std;
class Node {
   public:
   int val;
   Node* next;
   Node(int val){
      this->val = val;
      next = nullptr;
   }
};

void takeInputs(Node*& head, Node*& tail){
   int val;
   while(true){
      cin>>val;
      if(val == -1) break;
      Node* newNode = new Node(val);
      if(head ==nullptr){
         head = newNode;
         tail = newNode;
      }
      else{
         tail->next = newNode;
         tail=tail->next;
      }
   }
}

void printNodes(Node* head){
   Node* tmp = head;
   while(tmp != nullptr){
      cout<<tmp->val<<" ";
      tmp = tmp->next;
   }
}
void reverseSLL(Node*& head,Node* curr){
   if(curr->next == NULL){
      head = curr;
      return; 
   }
   reverseSLL(head, curr->next);
   curr->next->next = curr;
   curr->next = NULL;
}
int main(){
   Node* head = nullptr;
   Node* tail = nullptr;
   takeInputs(head, tail);
   reverseSLL(head,head);
   printNodes(head);
   return 0;
}