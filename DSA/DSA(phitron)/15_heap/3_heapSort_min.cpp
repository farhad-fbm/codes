#include<bits/stdc++.h>
using namespace std;

void print(vector<int> v){
   for(int val : v)cout<<val<<" ";
   cout<<endl;
}
void insertion(vector<int>& v, int x){
   v.push_back(x);
   int curIdx=v.size()-1;
   while(curIdx != 0){
      int parIdx= (curIdx-1)/2;
      if(v[curIdx] < v[parIdx]){ /* min  be root */
         swap(v[curIdx], v[parIdx]);
         curIdx=parIdx;
      }
      else break;
   }
}
void deleteHeap(vector<int>& v, vector<int>& v2){
   // 1. replace root by lastNode
   v2.push_back(v[0]);
   v[0]=v[v.size()-1];
   v.pop_back();
   // 2. positioned newROOt
   int curIdx=0;
   int lastIdx=v.size()-1;
   while(true){
      int leftIdx=curIdx*2+1;
      int rightIdx=curIdx*2+2;
      if(leftIdx <= lastIdx && rightIdx<=lastIdx){
         if(v[leftIdx] <= v[rightIdx]  && v[leftIdx] <= v[curIdx]){
            swap(v[leftIdx],v[curIdx]);
            curIdx=leftIdx;
         }
         else if(v[rightIdx] <= v[leftIdx] && v[rightIdx] <= v[curIdx]){
            swap(v[rightIdx],v[curIdx]);
            curIdx=rightIdx;
         }
         else break;
      }
      else if(leftIdx<=lastIdx){
         if(v[leftIdx]<v[curIdx]){
            swap(v[leftIdx],v[curIdx]);
            curIdx=leftIdx;
         }
         else break;
      }
      else break;
   }

}
int main(){
   int n; cin>>n;
   vector <int> v;
   for(int i=0; i<n; i++){
      int x; cin>>x;
      insertion(v, x);
   }
   print(v);
   vector <int> v2;
   for(int i=0; i<n; i++)deleteHeap(v,v2);
   print(v2);
   return 0;
}