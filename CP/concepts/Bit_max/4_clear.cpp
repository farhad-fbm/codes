/*
8=1000
7= 111
**************first n bits   set(1) =  (2^(n+1) -1) =  (1<<(n+1))-1
**************first n bits unset(1) = ~(2^(n+1) -1) = ~((1<<(n+1))-1)

unset(0) from  nth msb: =num &  ((1<<(n+1)) -1)
unset(0) first nth lsb: =num & ~((1<<(n+1)) -1)

(x & (x-1)) == 0 ,x power of 2;
x  = 1000
x-1=  111
*/
#include <bits/stdc++.h>
using namespace std;

void printBinary(int num){
    for(int i=7; i>=0; i--) cout<<((num >>i)&1);
    cout<<"\n";
}
int main(){
    int num=31;
    int n=2;
    printBinary(num);
    printBinary(num &   ((1<<(n+1)) -1));
    printBinary(num & (~((1<<(n+1)) -1)));

    int x=16;
    if((x & (x-1))) cout<<"not power of 2 \n";
    else cout<<"power of 2 \n";
    return 0;
}