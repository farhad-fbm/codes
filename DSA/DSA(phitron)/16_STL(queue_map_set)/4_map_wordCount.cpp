#include <bits/stdc++.h>
using namespace std;

int main(){
   string sen; getline(cin, sen);
   stringstream ss(sen);
   string word;

   map<string, int> mp;
   while(ss >> word){
      mp[word]++;
   }
   for(auto it=mp.begin(); it!=mp.end(); it++)
      cout<<it->first<<" "<<it->second<<endl;

   cout<<mp["is"]<<endl;
   return 0;
}

