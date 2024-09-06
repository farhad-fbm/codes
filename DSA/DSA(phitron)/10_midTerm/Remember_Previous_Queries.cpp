#include <bits/stdc++.h>
using namespace std;


int main(){
   list <int> lst;
   int t; cin>>t;
   while(t--){
      int x, v;
      cin>>x>>v;
      if(x==0){
         // insert head
         lst.push_front(v);

         cout<<"L -> ";
         for(int val : lst)cout<<val<<" "; cout<<endl;
         lst.reverse();
         cout<<"R -> ";
         for(int val : lst)cout<<val<<" "; cout<<endl;
         lst.reverse();
      }
      else if(x==1){
         // insert tail
         lst.push_back(v);

         cout<<"L -> ";
         for(int val : lst)cout<<val<<" "; cout<<endl;
         lst.reverse();
         cout<<"R -> ";
         for(int val : lst)cout<<val<<" "; cout<<endl;
         lst.reverse();

      }
      else if(x==2){
         // delete vth node  if vth node exist
         if(v < lst.size()){
            lst.erase(next(lst.begin(), v));
         }
         cout<<"L -> ";
         for(int val : lst)cout<<val<<" "; cout<<endl;
         lst.reverse();
         cout<<"R -> ";
         for(int val : lst)cout<<val<<" "; cout<<endl;
         lst.reverse();
      }
   }
   return 0;
}