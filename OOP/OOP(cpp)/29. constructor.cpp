#include <iostream>
using namespace std;

class Complex {
    int a, b;
public:
    
    Complex(void) { a = 10; b = 15; } //default constructor--takes no parameter
    void printNumber() { cout << a << " + " << b << "i" << endl; }
};

int main() {
    Complex c1;
    c1.printNumber();
    return 0;
}
/*
1. Constructor is a special member function with the same name as of the class.
2. It's automatically invoked whenever an object is created
3. Cann't return values & don't have return types
4. It have default arguments
5. We cann't refer to it's address
*/
