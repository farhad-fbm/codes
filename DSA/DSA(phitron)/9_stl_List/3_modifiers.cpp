#include <bits/stdc++.h>
using namespace std;

int main(){
   list <int> list1 = {1,2,3,4,5};

   // list <int> listP(list1);
   list <int> listP;
   listP = list1;
//    for(int val : listP) cout<< val<< " "; cout<<endl;
   


// 
//    listP.pop_back();
//    listP.pop_front();
//    listP.push_back(6);
//    listP.push_front(0);
//    for(int val : listP) cout<< val<< " "; cout<<endl;
  



   // insert at index
   // listP.insert(next(listP.begin(),2),222);
   // listP.insert(next(listP.begin(),2),{22,33,44});
   // listP.insert(next(listP.begin(),2),list1.begin(),list1.end());

   for(int val : listP) cout<< val<< " "; cout<<endl;
   // delete at index
   listP.erase(next(listP.begin(),0));
   // listP.erase(next(listP.begin(),2), next(listP.begin(),3));
   for(int val : listP) cout<< val<< " "; cout<<endl;








   // replace(listP.begin(),listP.end(),6,7);
   // for(int val : listP) cout<< val<< " "; cout<<endl;



   // auto i = find(listP.begin(),listP.end(),3);
   // if(i == listP.end()) cout<<"Not Found"<<endl;
   // else cout<<" Found"<<endl;
   
   return 0;
}