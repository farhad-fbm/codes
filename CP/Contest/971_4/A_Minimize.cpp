#include <bits/stdc++.h>
using namespace std;


int eqn(int a,int b,int c){
    return((c-a)+(b-c));
}
int main(){
    int t; cin>>t;
    while(t--){
        int a,b; cin>>a>>b;
        int minV=0;
        if(b>a){
            minV=INT_MAX;
            for(int c=0; c<=b; c++){
                int r = eqn(a,b,c);
                minV = min(minV,r);
            }
        }
        cout<<minV<<endl;
    }
    return 0;
}