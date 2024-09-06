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

void printLeftOuterNodes(Node* root){
   if(!root) return;
   if(root->left)printLeftOuterNodes(root->left);
   else printLeftOuterNodes(root->right);
   cout << root->val << " ";
   
}
void printRightOuterNodes(Node* root){
   if(!root) return;
   cout << root->val << " ";
   if(root->right)printRightOuterNodes(root->right);
   else printRightOuterNodes(root->left);
   
}

int main(){
   Node* root = input_bTree();
   if(root->left)printLeftOuterNodes(root->left);
   if(root)cout << root->val << " ";
   if(root->right)printRightOuterNodes(root->right);
 

   return 0;
}