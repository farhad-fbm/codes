#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n;
        string s,s2;
        cin>>n>>s;
        s2=s;
        
       set <char> dis(s.begin(),s.end());
       string r(dis.begin(),dis.end());
       string rr = r;
       reverse(rr.begin(),rr.end());



      
      for(int i=0; i<n; i++){
        for(int j=0; j<r.size();j++){
            if(s[i] == r[j]){
                s2[i]=rr[j];
                break;
            }
        }
      }
      cout<<s2<<endl;
    }
    return 0;
}