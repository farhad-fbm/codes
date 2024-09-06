#include <iostream>
using namespace std;

class Complex {
    int a, b;
    public:
    Complex() {
        a = 0;b = 0;
    }
    Complex(int x, int y) {
        a = x;b = y;
    }
    Complex(int x) {
        a = x;b = 0;
    }
    void printNumber() {
        cout << "number is " << a << " + " << b << "i" << endl;
    }
};

int main() {
    Complex c1(4, 6);
    c1.printNumber(); // 4 + 6i

    Complex c2(5);
    c2.printNumber(); // 5 + 0i

    Complex c3;
    c3.printNumber(); // 0 + 0i
    return 0;
}

