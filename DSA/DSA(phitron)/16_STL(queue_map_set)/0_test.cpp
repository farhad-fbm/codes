// heap--STL
#include <bits/stdc++.h>
using namespace std;

void printRoot(priority_queue<int> pq){
   if(!pq.empty())
      cout<<pq.top()<<endl;
   else
      cout<<"Empty"<<endl;
}

int main(){
   priority_queue<  int, vector<int>, greater<int>  > pq;  /*minHeap*/
   // priority_queue<int> pq;  /*maxHeap*/
   int n; cin>>n;
   while(n--){
      int x; cin>>x;
      pq.push(x);
   }
   int t; cin>>t;
   while(t--){
      int c; cin>>c;
      if(c==0){
         int x; cin>>x;
         pq.push(x); //O(logN)
         if(!pq.empty())
            cout<<pq.top()<<endl;
         else
            cout<<"Empty"<<endl;
      }
      else if(c==1){
         if(!pq.empty()) cout<<pq.top()<<endl;
         else cout<<"Empty"<<endl;
      }
      else if(c==2){
         if(!pq.empty()){
            pq.pop();
            if(!pq.empty()) cout<<pq.top()<<endl;
            else cout<<"Empty"<<endl;
         }
         else cout<<"Empty"<<endl;

      }
   }
   return 0;
}