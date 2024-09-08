// applicabe for monotonic function
//monotonic function: which maintain either increasing or deccreasing

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    vector<int> v = { 0, 1, 2, 3, 4 };
    sort(v.begin(), v.end());
    
    int to_find = 0;
    int low=0, hi=n-1;
    int mid;

    while(low <=hi){
        mid =low + (hi-low)/2;
        if(v[mid]==to_find) break;
        else if(v[mid] < to_find) low=mid+1;
        else if(v[mid]>to_find) hi=mid-1;
    }

    if(v[mid]==to_find) cout<<mid<<endl;
    else cout<<"no fount"<<endl;
    return 0;
}
