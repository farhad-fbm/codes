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

int input_bTree(){
   int sum=0;


   int val; cin>>val;
   Node* root=NULL;
   if(val != -1) root = new Node(val);
   queue<Node*> q;
   if(root)q.push(root);
   while(!q.empty()){
      Node* p = q.front();
      q.pop();
      // 
      int l,r;  cin>>l>>r;
      if(l != -1)p->left = new Node(l);
      if(r != -1)p->right = new Node(r);
      if(l != -1 || r != -1) sum += p->val;
      // 
      if(p->left)q.push(p->left);
      if(p->right)q.push(p->right);
   }
   return sum;

}

int main(){
   cout<< input_bTree();
   return 0;
}