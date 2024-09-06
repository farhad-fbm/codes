#include <bits/stdc++.h>
using namespace std;

int main(){
   // list<int> list1; /*size 0*/
   // list<int> list1(5); /*size 5 with garbage value*/
   // list<int> list1(5, 2); /*size 5 with 2*/
   list<int> list2 = {1,2,3,4,5};


   // int a[5] = {10,20,30,40,50};
   // list<int> listP(a,a+5);

   vector<int> v = {11,22,33,44,55};
   list<int> listP(v.begin(),v.end());

   for(auto i = listP.begin(); i != listP.end(); i++)  cout<< *i<<" ";
   cout<<endl;
   for(int val : listP) cout<<val<<" ";

   return 0;
}