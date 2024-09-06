#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        vector<int> v;
        int n; cin>>n;
        for(int i=0; i<n; i++){
            for(int j=0; j<4; j++){
                char x; cin>>x;
                if(x=='#') v.push_back(j+1);
            }
        }
        reverse(v.begin(), v.end());

        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}