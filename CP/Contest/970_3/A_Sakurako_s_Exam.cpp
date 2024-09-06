#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){

        int a, b;
        cin>>a>>b;

        bool flag=true;
        if(a%2 !=0) flag=false;  //a=odd
        else if(a==0 && b%2 !=0) flag=false; //a=even
        
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }
    return 0;
}