#include <bits/stdc++.h>
using namespace std;


void printVec(vector<int>& v){
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl; //newLine for each parent vector
}
int main(){
    int n; cin>>n; 
    vector <int> v;         // v store intger
    vector<vector<int>> vv; //vv store integer_Vector
    for(int i=0; i<n; i++){
        int x; cin>>x;
        vector<int> tmp; //*** 
        for(int j=0; j<x; j++){
            int val; cin>>val;
            tmp.push_back(val);
        }
        vv.push_back(tmp);  //***
    }
    for(int i=0; i<vv.size(); i++) printVec(vv[i]);
    return 0;
}