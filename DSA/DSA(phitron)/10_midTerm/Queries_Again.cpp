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

void insertAt(Node* head, int i, int v){
   Node* tmp = head;
   Node* newNode = new Node(v);
   for(int it=0; it<i-1; it++){
      tmp=tmp->next;
   }
   newNode->next = tmp->next;
   newNode->next->prev = newNode;

   tmp->next = newNode;
   newNode->prev = tmp;

}
void insertHead(Node*& head, Node*& tail, int v){
   Node* newNode = new Node(v);
   if(head == NULL){
      head = newNode;
      tail = newNode;
      return;
   }
   newNode->next=head;
   head->prev=newNode;
   head=newNode;
}
void insertTail(Node*& tail, int v){
   Node* newNode = new Node(v);
   tail->next = newNode;
   newNode->prev = tail;
   tail=newNode;
}
void printNode(Node* head){
   Node* tmp = head;
   cout<<"L -> ";
   while(tmp != NULL){
      cout<<tmp->val<<" ";
      tmp=tmp->next;
   }
   cout<<endl;
}
void printReverse(Node* tail){
   Node* tmp = tail;
   cout<<"R -> ";
   while(tmp != NULL){
      cout<<tmp->val<<" ";
      tmp=tmp->prev;
   }
   cout<<endl;
}
int listSize(Node* head){
   Node* tmp = head;
   int count=0;
   while(tmp!=NULL){
      count++;
      tmp=tmp->next;
   }
   return count;
}

int main(){
   Node* head = NULL;
   Node* tail = NULL;
   int t; cin>>t;
   while(t--){
      int i, v;
      cin>>i>>v;
      if(i==0){
         insertHead(head, tail, v);
         printNode(head);
         printReverse(tail);
      }
      else if(i == listSize(head)){
         insertTail(tail, v);
         printNode(head);
         printReverse(tail);
      }
      else if(i<listSize(head)){
         insertAt(head, i, v);
         printNode(head);
         printReverse(tail);
      }
      else cout<<"Invalid"<<endl;

   }

   return 0;
}