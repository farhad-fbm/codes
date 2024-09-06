/*
--You are given an integer x. Your task is to find any integer y(1≤y<x)
such that gcd(x,y)+y is maximum possible.
--Note that if there is more than one y which satisfies the statement, you are allowed to find any.
--gcd(a,b) is the Greatest Common Divisor of a and b. For example, gcd(6,4)=2
*/

#include <bits/stdc++.h>
using namespace std;


int gcd(int x, int r){
    if(r==0) return x;
    int r1 = x%r;
    x=r;
    r=r1;
    gcd(x, r);
}
int main(){
    int t; cin>>t;
    while(t--){
        int x; cin>>x;
        int g = 0;
        int y;
        for(int i=x-1; i>0; i--){
            if(g < (gcd(x, i)+i)){
                g = (gcd(x, i)+i);
                y=i;
            }
        }
        cout<<y<<endl;
    }
    return 0;
}