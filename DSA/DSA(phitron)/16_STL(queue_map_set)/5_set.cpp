// set
//1. sorted
//2. remove duplicate
//3. search

#include <bits/stdc++.h>
using namespace std;

int main(){
   set<int> s;
   int n; cin>>n;
   while(n--){
      int x; cin>>x;
      s.insert(x);  //O(logN)
   }
   for(auto it=s.begin(); it!=s.end(); it++)
      cout<<*it<<endl;
   

   // search
   if(s.count(2)) cout<<"exist"<<endl; //O(logN)
   else cout<<"not exist"<<endl;
   return 0;
}