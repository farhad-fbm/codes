#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;

    vector<int> v1;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        v1.push_back(x);
    }
    for(int vall : v1) cout<<vall<<" ";
    cout<<endl;

    vector<int>v2(n);
    for(int i=0; i<n; i++)
        cin>>v2[i];
    for (int vall : v2) cout << vall << " ";
    return 0;
}