/*
------------------------------(1)
odd  = 0th(1)
even = 0th(0)
-----------------------------(2)
n<<1 = 2n
n>>1 = n/2;
-----------------------------(3)
upperCase-5th--unset(0)
lowerCase-5th--  set(1)
(1<<5)=5th(1)= " "(space)
"_" = 5th(0)
*************************** 'A' | ' '  ='a'
*************************** 'a' & '_' ='A'
-------------------------------------------------
*/
#include <bits/stdc++.h>
using namespace std;

void printBinary(int num){
    for(int i=7; i>=0; i--) cout<<((num >>i)&1);
    cout<<" ";
}
int main(){
    for(int i=0; i<4; i++){
        printBinary(i);
        // odd/even------------------(1)
        if(i&1)cout<<"odd\n";
        else cout<<"even\n";
    }
    // divide/multiply by 2 ---------(2)
    cout<< (5>>1) <<endl;
    cout<< (5<<1) <<endl;
    // uperCase/lowercase-
    cout<<"A "; printBinary(int('A')); cout<<endl;
    cout<<"a "; printBinary(int('a')); cout<<endl;
    cout<<"Z "; printBinary(int('Z')); cout<<endl;
    cout<<"z "; printBinary(int('z')); cout<<endl;

    // char A='A'; cout<<char(A|(1<<5))<<endl;    //set=lower 
    // char b='b'; cout<<char(b& ~(1 <<5))<<endl;  //unset-Upper

    //************uperCase/lowercase------------(3)
    cout<<char('A'|' ')<<endl;
    cout<<char('a'&'_')<<endl;

    return 0;
}