#include <bits/stdc++.h>
using namespace std;

class complexnum {
    int a;
    int b;

    public:
    void set(int x, int y);
    void setsum(complexnum o1, complexnum o2);
    void get(void);
};




void complexnum :: set(int x, int y) {
    a = x;
    b = y;
}
void complexnum :: setsum(complexnum o1, complexnum o2) {   //*******
    a = o1.a + o2.a;
    b = o1.b + o2.b;
}
void complexnum :: get(void) {
    cout << a << " + " << b << "i" << endl;
}




int main() {
    complexnum c1, c2, c3;
    c1.set(1, 2);
    c1.get();

    c2.set(3, 4);
    c2.get();

    c3.setsum(c1, c2);  //**********
    c3.get();

    return 0;
}