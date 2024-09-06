#include <bits/stdc++.h>
using namespace std;

template <class T1=int,class T2=char> //default
class ab{
    public:
    T1 a;
    T2 b;
    ab(T1 x,T2 y){ 
        a=x; b=y;
        cout<<a<<"..."<<b<<endl;
    }
};

int main() {
    ab<> obj(4,'a');             //default <>
    ab<char,char> obj2('a','b'); //changed
    return 0;
}