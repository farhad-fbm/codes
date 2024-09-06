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
Node* convert(int ar[], int l, int r){
   if(l>r) return NULL;
   int mid = (l+r)/2;
   Node*  root = new Node(ar[mid]);
   Node* leftRoot = convert(ar,l,mid-1);
   Node* rightRoot = convert(ar,mid+1,r);
   root->left=leftRoot;
   root->right=rightRoot;
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
int main(){
   int n; cin>>n;
   int ar[n];
   for(int i=0; i<n; i++) cin>>ar[i];
   Node* root = convert(ar,0,n-1);
   level_order_print(root);
   return 0;
}