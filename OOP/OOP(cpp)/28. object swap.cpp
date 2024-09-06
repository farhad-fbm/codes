#include <bits/stdc++.h>
using namespace std;

class y;
class x {
    int A;
    friend void exchange(x&, y&);
    public:
    void set(int x) { A = x; }
    void get() { cout << "A= " << A << endl; }

};
class y {
    int B;
    friend void exchange(x&, y&);
    public:
    void set(int x) { B = x; }
    void get() { cout << "B= " << B << endl; }
};
void exchange(x& a, y& b) {
    int tem = a.A;
    a.A = b.B;
    b.B = tem;

}
int main() {
    x x1;
    y y1;
    x1.set(4);
    y1.set(5);

    exchange(x1, y1);
    cout << "now "; x1.get();
    cout << "now "; y1.get();
    return 0;
}