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

node* input_bTree(){
   int val;
   cin>>val;
   node* root=NULL;
   if(val != -1) root = new node(val);

   queue<node*> q;
   if(root)q.push(root);
   while(!q.empty()){
      // 1. pop parent
      node* p = q.front();
      q.pop();
      // 2. task
        // int l, r; cin>>l>>r;
        // node* newLeft=NULL; 
        // node* newRight=NULL;
        // if(l != -1) newLeft=new node(l);
        // if(r !=-1) newRight=new node(r);
        // p->left=newLeft;
        // p->right=newRight;
      int l, r; cin>>l>>r;
      if(l != -1)p->left = new node(l);
      if(r != -1)p->right = new node(r);
      // 3. push children
      if(p->left)q.push(p->left);
      if(p->right)q.push(p->right);
   }
   return root;
}
void level_order(node* root){
   if(root==NULL)return;

   queue<node*> q;
   q.push(root);
   while(!q.empty()){

      // 1. pop parent;
      node* p = q.front();
      q.pop();
      // 2. task
      cout<<p->val<<" ";
      // 3. push children
      if(p->left) q.push(p->left);
      if(p->right) q.push(p->right);
   }

}
int maxHeight(node* root){
   if(root==NULL)return 0;
   int l = maxHeight(root->left);
   int r = maxHeight(root->right);
   return max(l,r)+1;
}
int main(){
   node* root = input_bTree();
   level_order(root);
   cout<<endl;
   cout<<maxHeight(root);

   return 0;
}