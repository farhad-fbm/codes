#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s1; cin>>s1;
        string s2=s1;
        int flag=0;
        if(s1.size()<2) cout<<"NO"<<endl;
        else{
            for(int i=1; i<s1.size(); i++){
                if(s2[0] != s2[i]){
                    swap(s2[0], s2[i]);
                    if(s1 != s2){
                        flag=1;
                        break;
                    }
                }
            }
            if(flag){
                cout<<"YES"<<endl<<s2<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}