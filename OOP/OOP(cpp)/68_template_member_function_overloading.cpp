#include <bits/stdc++.h>
using namespace std;

void func(int a){
    cout<<"first func() "<<a<<endl;
}

template <class T>
void func(T a){
    cout<<"templatised func() "<<a<<endl;
}

int main() {
    func('a');
    func(4); //exact match takes hightest priority
    func(4.6);
    return 0;
}

/*
template <class T>
class Harry{
   public:
    T data;
    Harry(T a){data = a;}
    void display();        //external deifination
};
template <class T>
void Harry<T> :: display(){
    cout<<data;
}


*/