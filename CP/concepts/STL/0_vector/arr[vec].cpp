#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl; //newLine for each parent array index
}
int main(){
    int n; cin>>n;
    vector<int> v;     //total 1 vector;named v;
    vector<int> av[n]; //toatl n(fixed) vector stored in av Array; named av[i]
    for(int i=0; i<n; i++){ 
        int x; cin>>x;
        for(int j=0; j<x; j++){ 
            int val; cin>>val;
            av[i].push_back(val); //***
        }
    }
    for(int i=0; i<n; i++) printVec(av[i]);
    return 0;
}