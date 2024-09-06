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
Node* input_BT(){
   Node* root=NULL;
   int val; cin>>val;
   if(val != -1)root = new Node(val);

   queue<Node*> q;
   if(root)q.push(root);
   while(!q.empty()){
      Node* p = q.front();
      q.pop();

      int l, r; cin>>l>>r;
      if(l != -1)p->left = new Node(l);
      if(r != -1)p->right = new Node(r);

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

      Node* p = q.front();
      q.pop();

      cout<<p->val<<" ";

      if(p->left) q.push(p->left);
      if(p->right) q.push(p->right);
   }
}
void insert(Node* &root, int x){
   if(root == NULL){
      root = new Node(x);
      return;
   }
   if(x < root->val){
      if(root->left == NULL) root->left = new Node(x);
      else insert(root->left,x);
   }
   else{
      if(root->right == NULL) root->right= new Node(x);
      else insert(root->right,x);
   }
}

int main(){
   Node* root = input_BT();
   insert(root,4);
   insert(root,8);
   insert(root,13);
   level_order_print(root);
  

   return 0;
}