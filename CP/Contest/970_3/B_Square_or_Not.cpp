#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<char> v;;
        int nn=n;
        while(nn--){
            char val; cin>>val;
            v.push_back(val);
        }

        int r=1;
        int c=1;
        for(int i=1; i<=n; i++){
            if(v[i-1]=='0'){
                c=i-2;
                break;
            }
            else if(n==4){
                c = sqrt(n);
            }
        }
        if(c != 1){
            r = n/c;
            if(r==c) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else cout<<"No"<<endl;

    }
    return 0;
}