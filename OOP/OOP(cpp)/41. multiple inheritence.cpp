#include <bits/stdc++.h>
using namespace std;

class base1 {
    protected:
    int b1;
    public:
    void set_b1(int a) { b1 = a; }
};
class base2 {
    protected:
    int b2;
    public:
    void set_b2(int a) { b2 = a; }
};
class derived : public base1, public base2 {
    public:
    void get() { cout << "sum of base1 and base2 = " << b1 + b2 << endl; }
};
int main() {
    derived d;
    d.set_b1(4);
    d.set_b2(6);

    d.get();
    return 0;
}