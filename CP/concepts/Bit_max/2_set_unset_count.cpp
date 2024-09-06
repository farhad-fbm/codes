/*
1<<0 =   1=1
1<<1 =  10=2
1<<2 = 100=4
1<<3 =1000=8
************ ******1<<n = 2^n

----set(1)---unset(0)
only set bit:
0th =  1 =1
1st = 10 =2
2nd =100 =4
****************only nth bit   set(1) =   2^n =   1<<n
****************only nth bit unset(0) = ~(2^n)= ~(1<<n)
4=100
3= 11
-------
8=1000
7= 111
**************first n bits set(1) = 2^(n+1) -1;





###check a num, nth bit set/unset;
if num &(1<<n)
== 0;  nth bit unset(0)
!= 0;  nth bit   set(1)


****  set nth bit = num |  (1<<n)
****unset nth bit = num & ~(1<<n)
***toggle nth bit = num ^  (1<<n) -------1^1=0; 0^1=1;---XOR(odd1 =1)
*/



#include <bits/stdc++.h>
using namespace std;

void printBinary(int num){
    for(int i=7; i>=0; i--) cout<<((num>>i) &1);   //num >>n  =nth-->0th
    cout<<endl;
}
int main(){
    int num=13;
    int pos=3;
    printBinary(~num);
    printBinary(num);
    cout<<"bit-"<<pos<<" ";
    if((num & (1<<pos))!=0) cout<<"set"<<endl;
    else cout<<"unset"<<endl;

    // to set nth bit
    cout<<"print set - "<<pos<<" "; printBinary(num | (1<<pos));
    //to unset nth bit
    cout<<"print unset-"<<pos<<" "; printBinary(num & ~(1<<pos));
    // nth bit toggle
    cout<<"print tggle-"<<pos<<" "; printBinary(num ^ (1<<pos));
    // bits count
    int count=0;
    for(int i=31; i>=0; --i){
        if((num & (1<<i))!=0) count++;
    }
    cout<<"setBits "<<count<<endl;
    // buitin_function
    cout<<"setBits "<<__builtin_popcount(num)<<endl;
    cout<<"setBits long int "<<__builtin_popcountll((1ll<<35)-1)<<endl;

    return 0;
}