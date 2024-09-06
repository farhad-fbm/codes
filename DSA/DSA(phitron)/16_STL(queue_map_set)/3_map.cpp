#include <bits/stdc++.h>
using namespace std;
//  map = key value pair
// map<key,value>;
int main(){


   map<string, int> mp;
   mp.insert({ "fbm",45 });
   mp["fahad"]=46;
   mp["parvej"]=65;


   for(auto it=mp.begin(); it!=mp.end(); it++){
      cout<<it->first<<" "<<it->second<<endl;
   }

   if(mp.count("fahad"))
      cout<<"exist"<<endl;
   else cout<<"not exist"<<endl;
   return 0;
}