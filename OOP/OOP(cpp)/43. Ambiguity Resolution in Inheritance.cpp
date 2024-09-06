#include <bits/stdc++.h>
using namespace std;

class base1 {
    public:
    void get() { cout << "hi"; }
};
class base2 {
    public:
    void get() { cout << "hello"; }
};
class derived : public base1, public base2 {
    public:                               
                                      //1
    //void get() { cout << "hifi"; }  //2
    //void get() { base2 :: get(); }  //3
      void get() { base1 :: get(); }  //4
};

int main() {
    derived d;
    //d.get();                        //1= error
    //d.get();                        //2= hifi
    //d.get();                        //3= hello
    d.get();                          //4= hi

    return 0;
}