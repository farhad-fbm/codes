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
void printList(Node* head){
   Node* tmp = head;
   while(tmp != NULL){
      cout<<tmp->val<<' ';
      tmp=tmp->next;
   }
}
void deleteDuplicate(Node* head){

   Node* curr = head;
   while (curr != NULL && curr->next != NULL)
   {
         Node* nextPtr = curr;
         while (nextPtr->next != NULL){
            if (curr->val == nextPtr->next->val){
               Node* dup = nextPtr->next;
               nextPtr->next = nextPtr->next->next;
               delete dup;
            }
            else nextPtr = nextPtr->next;
         }
         curr = curr->next;
   }

   // for(Node* i=head; i!= NULL; i=i->next){
   //    if(i->next == NULL) return;
   //    for(Node* j=i; j->next != NULL;){
   //       if(i->val == j->next->val){
   //          Node* dup = j->next;
   //          j->next = j->next->next;
   //          delete dup;
   //       }
   //       else(j=j->next);
   //    }
   // }
}
int main(){
   Node* head = NULL;
   Node* tail = NULL;
   takeInputs(head, tail);
   deleteDuplicate(head);
   printList(head);
   return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//    public:
//    int val;
//    Node* next;

//    Node(int val){
//       this->val = val;
//       next = NULL;
//    }
// };
// void insertNodes(Node*& head, Node*& tail){
//    int val;
//    while(true){
//       cin>>val;
//       if(val == -1) return;
//       Node* newNode = new Node(val);
//       if(!head){
//          head=newNode;
//          tail=newNode;
//       }
//       else{
//          tail->next = newNode;
//          tail = tail->next;
//       }
//    }
// }
// void printNodes(Node* head){
//    Node* tmp = head;
//    while(tmp != NULL){
//       cout<<tmp->val<<" ";
//       tmp=tmp->next;
//    }
// }

// void removeDuplicates(Node* head){
//    Node* curr, * nextPtr, * dup;
//    // curr = head;
//    // while (curr != NULL && curr->next != NULL)
//    // {
//    //     nextPtr = curr;
//    //     while (nextPtr->next != NULL){
//    //         if (curr->val == nextPtr->next->val){
//    //             dup = nextPtr->next;
//    //             nextPtr->next = nextPtr->next->next;
//    //             delete dup;
//    //         }
//    //         else nextPtr = nextPtr->next;
//    //     }
//    //     curr = curr->next;
//    // }
//    for(curr = head; curr!=NULL; curr=curr->next){
//       if(curr->next == NULL) return;
//       for(nextPtr=curr; nextPtr->next != NULL;){
//          if(curr->val ==nextPtr->next->val){
//             dup=nextPtr->next;
//             nextPtr->next = nextPtr->next->next;
//             delete dup;
//          }
//          else nextPtr=nextPtr->next;
//       }
//    }
// }
// int main(){
//    Node* head = NULL;
//    Node* tail = NULL;
//    insertNodes(head, tail);
//    removeDuplicates(head);
//    printNodes(head);

//    return 0;
// }