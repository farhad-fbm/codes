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

int main(){
   Node* head = new Node(1);
   Node* a = new Node(2);
   Node* b = new Node(3);
   Node* c = new Node(4);

   head->next = a;
   a->next = b;
   b->next = c;
   // c->next = NULL; /* not found */
   c->next = b; /* detect */

   Node* fast = head;
   Node* slow = head;
   int flag = 0;
   while(fast != NULL && fast->next != NULL){
      slow = slow->next;
      fast = fast->next->next;

      if(slow == fast){
         flag = 1;
         break;
      }
   }
   if(flag)cout<<"Cycle detect"<<endl;
   else cout<<"Cycle not Found"<<endl;
   return 0;
}