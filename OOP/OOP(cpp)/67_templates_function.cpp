#include <bits/stdc++.h>
using namespace std;

template <class T=int>  //default
void ab(T x){ 
    T a=x;
    cout<<a<<endl;
}

template <class T1>
void swaap(T1 &a, T1 &b){
    T1 temp =a;
    a=b;
    b=temp;
}

int main() {
    ab(5);
    // char y='a';
    // ab(y);
    ab('a');   //overloading


    int m=4, n=7;
    swaap(m,n);
    cout<<m<<"..."<<n<<endl;

    return 0;
}