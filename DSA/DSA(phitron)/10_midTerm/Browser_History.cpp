#include <bits/stdc++.h>
using namespace std;

class Node {
   public:
   string val;
   Node* next;
   Node* prev;

   Node(string val){
      this->val = val;
      next = NULL;
      prev = NULL;
   }
};

void insertTail(Node*& head, Node*& tail){
   string val;
   while(true){
      cin>>val;
      if(val == "end")break;
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
void printNodeReverse(Node* tail){
   Node* tmp = tail;
   while(tmp != NULL){
      cout<<tmp->val<<" ";
      tmp=tmp->prev;
   }
}

void findValue(Node* head, Node*& curr, string s){
   Node* tmp = head;
   while(tmp != NULL){
      if(s == tmp->val) curr = tmp;
      tmp = tmp->next;
   }
}

int main(){
   Node* head = NULL;
   Node* tail = NULL;
   Node* curr = NULL;

   insertTail(head, tail);
   // printNode(head);
   // printNodeReverse(tail);
   int t; cin>>t;
   while(t--){
      string cmd; cin>>cmd;
      if(cmd == "visit"){
         string ky;cin>>ky;
         bool flag = false;
         Node* tmp = head;
         while(tmp != NULL){
            if(ky == tmp->val){
               curr = tmp;
               flag = true;
               break;
            }
            tmp = tmp->next;
         }
         if(flag)cout<<curr->val<<endl;
         else cout<<"Not Available"<<endl;
      }
      else if(cmd == "prev"){
         if(curr == head)cout<<"Not Available"<<endl;
         else{
            curr = curr->prev;
            cout<<curr->val<<endl;
         }
      }
      else if(cmd == "next"){
         if(curr == tail)cout<<"Not Available"<<endl;
         else{
            curr = curr->next;
            cout<<curr->val<<endl;
         }
      }

   }

   return 0;
}