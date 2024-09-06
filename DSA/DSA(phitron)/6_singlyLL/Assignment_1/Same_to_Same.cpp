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
void takeInputs(Node*& head, Node*& tail){
   int val;
   while(true){
      cin>>val;
      if(val == -1) break;
      Node* newNode = new Node(val);
      if(!head){
         head = newNode;
         tail = newNode;
      }
      else{
         tail->next = newNode;
         tail = tail->next;
      }

   }
}

int listSize(Node* head){
   int sz=0;
   for(Node* tmp = head; tmp != nullptr; tmp=tmp->next){
      sz++;
   }
   return sz;
}

int checkList(Node* head1, Node* head2){
   Node* tmp1 = head1;
   Node* tmp2 = head2;
   for(tmp1; tmp1 != nullptr; tmp1=tmp1->next){
      if(tmp1->val != tmp2->val)return 0;
      tmp2 = tmp2->next;
   }
   return 1;
}
int main(){
   Node* head1 = nullptr; Node* tail1 = nullptr;
   Node* head2 = nullptr; Node* tail2 = nullptr;

   takeInputs(head1, tail1);
   takeInputs(head2, tail2);
   if(listSize(head1) != listSize(head2)) cout<<"NO"<<endl;
   else{
      if(checkList(head1, head2)) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
   }
   return 0;
}