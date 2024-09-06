#include <bits/stdc++.h>
using namespace std;

class node{
   public:
   int val;
   node* next;
   node* prev;
   node(int val){
      this->val=val;
      this->next=NULL;
      this->prev=NULL;
   }
};
int sz(node* head){
   node* tmp=head;
   int size=0;
   while(tmp!=NULL){
      tmp=tmp->next;
      size++;
   }
   return size;
}
void showOutput(node* head, node* tail){
   for(node* i=head; i!=NULL; i=i->next) cout<<i->val<<" ";
   cout<<endl;
   for(node* i=tail; i!=NULL; i=i->prev) cout<<i->val<<" ";
   cout<<endl;
}
void takesInput(node*& head, node*& tail){
   int val;
   while(true){
      cin>>val;
      if(val==-1)break;
      node* newNode = new node(val);
      if(head==NULL){
         head=newNode;
         tail=newNode;
         // head->next=tail;
         // tail->prev=head;
      }
      else{
         tail->next=newNode;
         newNode->prev=tail;
         tail=tail->next;
      }
   }
   showOutput(head, tail);
}
void insertTail(node* head, node*& tail){
   int val; cin>>val;
   node* newNode = new node(val);
   tail->next=newNode;
   newNode->prev=tail;
   tail=tail->next;
   showOutput(head, tail);
}
void insertHead(node*& head, node* tail){
   int val; cin>>val;
   node* newNode = new node(val);
   newNode->next=head;
   head->prev=newNode;
   head=newNode;
   showOutput(head, tail);
}
void insertAny(node* head, node* tail){
   node* tmp=head;
   int pos, val; cin>>pos>>val;
   if(pos<2){ cout<<"please select correctly"; return; };
   int count=1;
   while(count<pos-1){
      tmp=tmp->next;
      if(tmp==NULL){ cout<<"pos doesn't exist"; return; };
   }
   node* newNode=new node(val);
   newNode->next=tmp->next;
   tmp->next->prev=newNode;

   tmp->next=newNode;
   newNode->prev=tmp;

   showOutput(head, tail);
}
void deleteTail(node* head, node*& tail){
   node* toDelete = tail;
   tail->prev->next=NULL;
   tail=tail->prev;
   delete toDelete;
   showOutput(head, tail);
}
void deleteHead(node*& head, node* tail){
   node* toDelete=head;
   head=head->next;
   head->prev=NULL;
   delete toDelete;
   showOutput(head, tail);
}
void deleteAny(node* head, node* tail){
   node* tmp=head;
   int pos; cin>>pos;
   if(pos<2){ cout<<"please selete deleteHead"; return; };
   int count=1;
   while(count<pos-1){
      tmp=tmp->next;
      if(tmp==NULL){ cout<<"pos doesn't exist"; return; };
      count++;
   }
   if(tmp->next==NULL){ cout<<"pos doesn't exist"; return; };
   node* toDelete = tmp->next;
   tmp->next=tmp->next->next;
   tmp->next->prev=tmp;
   delete toDelete;
   showOutput(head, tail);
}
int main(){
   node* head = NULL;
   node* tail = NULL;

   while(true){
      cout<<"-1. exits "<<endl;
      cout<<"1. takes_input "<<endl;
      // cout<<"2. show_output "<<endl;
      cout<<"3. insert_tail"<<endl;
      cout<<"4. insert_head"<<endl;
      cout<<"5. insert_any"<<endl;
      cout<<"6. delete_tail"<<endl;
      cout<<"7. delete_head"<<endl;
      cout<<"8. delete_any"<<endl;
      cout<<"9. total_nodes(size)"<<endl;


      int op; cin>>op;
      if(op==1)takesInput(head, tail);
      else if(op==2)showOutput(head, tail);
      else if(op==3)insertTail(head, tail);
      else if(op==4)insertHead(head, tail);
      else if(op==5)insertAny(head, tail);
      else if(op==6)deleteTail(head, tail);
      else if(op==7)deleteHead(head, tail);
      else if(op==8)deleteAny(head, tail);
      else if(op==9)cout<<sz(head)<<endl;;
   }
   return 0;
}