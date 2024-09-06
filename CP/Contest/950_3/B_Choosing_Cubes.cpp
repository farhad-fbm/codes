#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, f, k; cin>>n>>f>>k;
        k--;f--;
        vector<int> v;
        for(int i=1; i<n; i++){
            int x; cin>>x;
            v.push_back(x);
        }
        int fv= v[f];
        sort(v.begin(), v.end(), greater<>());

        if(v[k] > fv) cout<<"NO\n";
        else if(fv == v[k] && fv ==v[k+1]) cout<<"MAYBE\n";
        else cout<<"YES\n";
        // vector<int> v1;
        // vector<int> v2;
        // for(int i=0; i<n; i++){
        //     if(i<=k)v1.push_back(v[i]);
        //     else{
        //         v2.push_back(v[i]);
        //     }
        // }
        // auto it1 = find(v1.begin(),v1.end(),fv);
        // auto it2 = find(v1.begin(),v2.end(),fv);

        // if(it1 != v1.end()  && it2 != v2.end()) cout<<"MAYBE\n";
        // else if(it1 != v1.end()) cout<<"YES\n";
        // else cout<<"NO\n";


    }
    return 0;
}