#include <bits/stdc++.h>
using namespace std;


int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i%2==0 && j%2==0)cout<<"##";
                if((i+1)%2==0 && j%2)==0)cout<<"##";
                else if(i%2 !=0 && j%2!=0) cout<<"##";
                else cout<<"..";
            }cout<<endl;
        }
    }
    return 0;
}