#include <bits/stdc++.h>
using namespace std;

class Node {
   public:
   int val;
   Node* next;
   Node* prev;

   Node(int val){
      this->val = val;
      next = NULL;
      prev = NULL;
   }
};

void insertTail(Node*& head, Node*& tail){
   int val;
   while(true){
      cin>>val;
      if(val == -1)break;
      Node* newNode = new Node(val);
      if(head == NULL){
         head = newNode;
         tail = newNode;
      }
      else{
         tail->next = newNode;
         newNode->prev = tail;

         tail = newNode;
      }
   }
}
void printNode(Node* head){
   Node* tmp = head;
   while(tmp != NULL){
      cout<<tmp->val<<" ";
      tmp=tmp->next;
   }
}

bool isPalindrome(Node* head, Node* tail){
   Node* i = head;
   Node* j = tail;
   while(i !=j){
      if(i->val != j->val){
        return false;
      }
      if(i->next != j){
         if(i->val != j->val) return false;
      }
      i=i->next;
      j=j->prev;
   }
   return true;
}

int main(){
   Node* head = NULL;
   Node* tail = NULL;

   insertTail(head,tail);
   // printNode(head);
   if(isPalindrome(head,tail))cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

   return 0;
}