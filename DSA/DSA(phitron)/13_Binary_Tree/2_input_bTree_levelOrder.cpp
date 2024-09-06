#include <bits/stdc++.h>
using namespace std;

class Node{
   public:
   int val;
   Node* left;
   Node* right;
   Node(int val){
      this->val=val;
      this->left=NULL;
      this->right=NULL;
   }
};
Node* input_bTree(){
   Node* root=NULL;
   int val; cin>>val;
   if(val != -1) root=new Node(val);

   queue<Node*> q;
   if(root)q.push(root);
   while(!q.empty()){
      // 1. pop parent
      Node* p = q.front();
      q.pop();
      // 2. task
        // int l, r; cin>>l>>r;
        // Node* newLeft=NULL; 
        // Node* newRight=NULL;
        // if(l != -1) newLeft=new Node(l);
        // if(r !=-1) newRight=new Node(r);
        // p->left=newLeft;
        // p->right=newRight;
      int l, r; cin>>l>>r;
      if(l != -1)p->left = new Node(l);
      if(r != -1)p->right = new Node(r);


      // 3. push children
      if(p->left)q.push(p->left);
      if(p->right)q.push(p->right);
   }
   return root;
}
void level_order_print(Node* root){
   if(root==NULL)return;

   queue<Node*> q;
   q.push(root);
   while(!q.empty()){

      // 1. pop parent;
      Node* p = q.front();
      q.pop();
      // 2. task
      cout<<p->val<<" ";
      // 3. push children
      if(p->left) q.push(p->left);
      if(p->right) q.push(p->right);
   }
}

int main(){
   Node* root = input_bTree();
   level_order_print(root);

   return 0;
}