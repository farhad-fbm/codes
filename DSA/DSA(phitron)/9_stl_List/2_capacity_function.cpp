#include <bits/stdc++.h>
using namespace std;

int main(){
   list <int> list1 = {1,2,3};
   cout<<list1.size()<<endl;
   // cout<<list1.max_size()<<endl;

   // list1.clear();


   list1.resize(2);
   list1.resize(5);
   list1.resize(8,55);
   for(int val : list1) cout<<val<<" ";
   return 0;
}