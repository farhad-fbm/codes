#include <bits/stdc++.h>
using namespace std;

class Node{
   public:
   int val;
   Node* next;

   Node(int val){
      this->val = val;
      next = nullptr;
   }
};


void printList(Node* head){
   Node* tmp = head;
   while(tmp != nullptr){
      cout<<tmp->val<<' ';
      tmp=tmp->next;
   }
   cout<<endl;
}

int listSize(Node* head){
   int sz=0;
   for(Node* tmp = head; tmp != nullptr; tmp=tmp->next){
      sz++;
   }
   return sz;
}

void deleteNode(Node*& head,Node*& tail, int idx){
   if(idx==0){
      Node* deleteNode = head;
      head = head->next;
      delete deleteNode;
   }
   else{
      Node* tmp = head;
      for(int i = 1; i < idx; i++){
         tmp = tmp->next;
         if(tmp == nullptr) return; /*position not exist*/
      }
      if(tmp->next == nullptr) return; /*position not exist*/
      Node* deleteNode = tmp->next;
      tmp->next = tmp->next->next;
      if(tmp->next == nullptr) tail=tmp; /*delete & update tail*/
      delete deleteNode;
   }
}


int main(){
   Node* head = nullptr;
   Node* tail = nullptr;

   int t; cin>>t;
   while(t--){
      int x, v;
      cin>>x>>v;
      if(x==0){
         // insert v at head
         Node* newNode = new Node(v);
         if(!head){
            head=newNode;
            tail=newNode;
         }
         else{
            newNode->next = head;
            head = newNode;
         }
         printList(head);
      }
      else if(x==1){
         // insert v at tail
         Node* newNode = new Node(v);
         if(!head){
            head=newNode;
            tail=newNode;
         }
         else{
            tail->next = newNode;
            tail = tail->next;
         }
         printList(head);
      }
      else if(x==2){
         // delete vth val
         if(v < listSize(head)){
            deleteNode(head,tail, v);
            printList(head);

         }
         else  printList(head);


      }
   }


   return 0;
}