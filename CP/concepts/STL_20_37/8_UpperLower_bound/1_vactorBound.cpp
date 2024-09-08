#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v={ 2,5,1,8,3 };
    sort(v.begin(), v.end());

    for(int val : v) cout<<val<<" ";
    cout<<endl;

    // int* ptr = lower_bound(arr, arr+n, 26);
    auto it = lower_bound(v.begin(), v.end(), 26);
    if(it==v.end()) cout<<"Not Found";
    else cout<<*it<<endl;
    return 0;
}

/**
 * in sorted element
 * lower_bound():
 * find target element or next greater element
 *
 * upper_bound():
 * find next greater element
 *
 *
 * return pointer / iterator
 */