#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, e; cin>>n>>e;
    int mat[n][n];
    memset(mat, 0, sizeof(mat));
    while(e--){
        int a, b; cin>>a>>b;
        mat[a][b]=1;
    }
    int t; cin>>t;
    while(t--){
        int a,b; cin>>a>>b;
        if(mat[a][b]==1)cout<<"YES"<<endl;
        else if(a==b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}