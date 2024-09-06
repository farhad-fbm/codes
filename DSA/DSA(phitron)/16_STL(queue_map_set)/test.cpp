// You will be given a sentence  that contains words with lowercase and uppercase English alphabets separated by spaces.You need to determine which word occurs the most times and also provide the count of that word.

// Note: If there are multiple words that occur the most, print the first word that reaches the maximum count before others.


#include <bits/stdc++.h>
using namespace std;

int main(){
   int t; cin>>t;
   getchar();
   while(t--){
      string sen; getline(cin, sen);
      stringstream ss(sen);
      string word;

      map<string, int> mp;
      while(ss >> word){
         mp[word]++;
      }
      int maxCount=0;
      for(auto it=mp.begin(); it!=mp.end(); it++){
         if(maxCount < it->second){
            maxCount=it->second;
         }
      }

      stringstream ss2(sen);
      string word2;
      map<string, int> mp2;
      while(ss2 >> word2){
         mp2[word2]++;
         if(mp2[word2]==maxCount){
            cout<<word2<<" "<<maxCount<<endl;
            break;
         }
      }

   }
   return 0;
}