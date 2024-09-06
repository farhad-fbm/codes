#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long x, y, k;
        cin>>x>>y>>k;
        x=(x+k-1)/k, y=(y+k-1)/k;
        long long ans=x+y+abs(x-y);
        if(x>y){
            cout<<ans-1<<endl;
            return;
        }
        cout<<ans<<endl;
    }
    return 0;
}