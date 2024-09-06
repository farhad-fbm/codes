#include <bits/stdc++.h>
using namespace std;

template <class T>
class A{
    T a;
    public:
    A(T t){                  //constructor
        a=t; cout<<a<<endl;
    }
};

int main() {
    A<int> obj(4);
    A<char> obj2('a');
    A<float> obj3(4.3);
    return 0;
}