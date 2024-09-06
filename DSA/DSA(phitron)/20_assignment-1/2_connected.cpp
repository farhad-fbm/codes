// unweighted

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, e; cin>>n>>e;
    vector<int> mat[n];
    while(e--){
        int a, b; cin>>a>>b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    // for(int val : mat[0])
    //    cout<<val<<" ";
    int t; cin>>t;
    while(t--){
        int idx;cin>>idx;
        if(!mat[idx].empty()){
            sort(mat[idx].begin(),mat[idx].end(), greater<int>());
            for(int val : mat[idx]){
                cout<<val<<" ";
            }
            cout<<endl;
        }
        else cout<<"-1"<<endl;
    }

    return 0;
}