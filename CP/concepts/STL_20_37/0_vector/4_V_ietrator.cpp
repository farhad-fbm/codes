#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={1,3,4,5,6};
    cout<<v[0]<<endl;
    cout<<v.back()<<endl;

    for(auto it=v.begin(); it<v.end(); it++){
        cout<<*it<<" ";
    }
    return 0;
}