/*
XOR,
101 (5)
101 (5)
000
********n^n==0
********n^0==n
x^y = y^x

*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    // swap--------(1)
    int a=5, b=6;
    a = a^b;
    b = a^b; // (a^b)^b
    a = a^b; // (a^b)^a
    cout<<a<<" "<<b<<'\n';


    // an array of n integers,all integers count even except one;
    // find that in Time:O(n) & ***Space:O(1)
    // int ar[5]={2,3,2,5,3};
    // ans : XOR at all integers,  even are skipped(a^a=0)

    int n;cin>>n;
    int ans=0;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        ans ^= x;  //space: O(1)
    }
    cout<<ans<<endl;




    return 0;
}