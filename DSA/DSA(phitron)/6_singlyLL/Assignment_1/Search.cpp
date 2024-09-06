#include <bits/stdc++.h>
using namespace std;
class Node{
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
      if(val==-1) break;
      Node* newNode = new Node(val);
      if(!head) {
         head=newNode;
         tail=newNode;
      }
      else{
         tail->next = newNode;
         tail=tail->next;
      }
   }
}
int checkPos(Node* head, int v){

   int pos=0;
   for(Node* tmp = head; tmp != NULL; tmp=tmp->next){
      if(v== tmp->val) return pos;
      pos++;
   }
   return -1;
}
int main(){
   int t; cin>>t;
   while(t--){
      Node* head = NULL;
      Node* tail = NULL;
      takeInputs(head, tail);

      int v; cin>>v;;
      cout << checkPos(head, v) << endl;
      checkPos(head,v);
   }
   return 0;
}