#include <bits/stdc++.h>
using namespace std;

template <class T1,class T2>
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
    ab<int,char> obj(4,'a');
    ab<char,int> obj2('a',4);

    return 0;
}