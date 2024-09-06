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

   int val; cin>>val;
   Node* root=NULL;
   if(val != -1) root = new Node(val);


   queue<Node*> q;
   if(root)q.push(root);
   while(!q.empty()){
      Node* p = q.front();
      q.pop();
      // 
      int l, r;  cin>>l>>r;
      if(l != -1)p->left = new Node(l);
      if(r != -1)p->right = new Node(r);


      // 
      if(p->left)q.push(p->left);
      if(p->right)q.push(p->right);
   }
   return root;

}
int maxHeight(Node* root){
   if(root==NULL)return 0;
   int l = maxHeight(root->left);
   int r = maxHeight(root->right);
   return max(l, r)+1;
}
void levelNodes(Node* root, int x){
   vector<int> v;

   queue<pair<Node*, int>> q;
   if(root)q.push({ root,0 });
   while(!q.empty()){
      pair<Node*, int> p = q.front();
      q.pop();
      Node* node = p.first;
      int level = p.second;
      // 

      if(level==x)v.push_back(node->val);


      // 
      if(node->left)q.push({ node->left,level+1 });
      if(node->right)q.push({ node->right,level+1 });
   }

   for(int val : v) cout<<val<<" ";
}

int main(){
   Node* root = input_bTree();
   int h = maxHeight(root);
   int x; cin>>x;
   if(x>h-1)cout<<"Invalid";
   else{
      levelNodes(root,x);
   }
   return 0;
}