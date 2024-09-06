#include <bits/stdc++.h>
using namespace std;

class A {
    int a, b;
public:
    A(int x, int y = 4) {
        a = x; b = y;
    }
    void get() { cout << a << " & " << b << endl; }
};
int main() {
    A x(2);
    x.get(); // 2 & '4(default)'

    A y(2, 6);
    y.get(); // 2 & 6 (skip default)
    return 0;
}