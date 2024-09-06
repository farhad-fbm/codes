#include <bits/stdc++.h>
using namespace std;
class node{
   public:
   int val;
   node* left;
   node* right;
   node(int val){
      this->val=val;
      this->left=NULL;
      this->right=NULL;
   }
};
void preOrder_print(node* root){
   if(root==NULL)return;
   cout<<root->val<<" ";
   preOrder_print(root->left);
   preOrder_print(root->right);
}
void postOrder_print(node* root){
   if(root==NULL)return;
   postOrder_print(root->left);
   postOrder_print(root->right);
   cout<<root->val<<" ";
}
void inOrder_print(node* root){
   if(root==NULL)return;
   inOrder_print(root->left);
   cout<<root->val<<" ";
   inOrder_print(root->right);
}
void level_order_print(node* root){
   queue<node*> q;
   q.push(root);
   while(!q.empty()){
      // 1. pop front;
      node* f = q.front();
      q.pop();
      // 2. task
      cout<<f->val<<" ";
      // 3. push children
      if(f->left) q.push(f->left);
      if(f->right) q.push(f->right);
   }
}
int main(){
   node* root = new node(10);
   node* a = new node(20);
   node* b = new node(30);
   node* c = new node(40);
   node* d = new node(50);
   node* e = new node(60);
   node* f = new node(70);
   node* g = new node(80);
   node* h = new node(90);
   node* i = new node(100);

   root->left=a;
   root->right=b;
   a->left=c;
   a->right=h;
   c->right=e;
   h->right=i;
   b->right=d;
   d->left=f;
   d->right=g;

   preOrder_print(root); cout<<endl;
   postOrder_print(root); cout<<endl;
   inOrder_print(root); cout<<endl;
   level_order_print(root);cout<<endl;
   return 0;
}