#include <bits/stdc++.h>
using namespace std;

int main(){
   
   list <int> listA;
   int val;
   while(true){
      cin>>val;
      if(val == -1)break;
      listA.push_back(val);
   }
   listA.sort();
   listA.unique();
   for(int val : listA) cout<<val<<" ";

   return 0;
}