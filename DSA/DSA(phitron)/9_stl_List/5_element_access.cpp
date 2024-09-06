#include <bits/stdc++.h>
using namespace std;

int main(){
   list <int> list1 = {1,2,3,4,5};

   cout<<list1.front()<<" ";
   cout<<list1.back()<<endl;

   cout<<*list1.begin()<<" ";
   cout<<*list1.end()<<endl;

   cout<<*next(list1.begin(),2)<<endl;


   return 0;
}