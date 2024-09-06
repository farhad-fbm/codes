/*
3<<1 =  6;  (11)<<1  = (110)
4<<1 =  8;  (100)<<1 = (1000)
5<<1 = 10;  (101)<<1 = (1010)
6<<1 = 12;  (110)<<1 = (1100)

-------------------------------------------
1001 >>1 =100---1th-->0th
1001 >>2 = 10---2th-->0th
1001 >>3 =  1---3th-->0th

******num >>n  =nth-->0th



n<<1 = 2n
n>>1 = n/2;
1<<n = 2^n
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<INT_MAX<<endl;
    int a = (1ll <<31)-1;           cout<<a<<endl;      // 1bit for sign
    unsigned int b = (1ll <<32)-1;  cout<<b<<endl;

    int c = 33; cout<<c<<endl;
    cout<<(c<<1)<<endl;
    return 0;
}