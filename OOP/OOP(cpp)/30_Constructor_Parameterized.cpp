
// Parameterized Constructor using Friend Function Example :-
#include <iostream>
#include <cmath>
using namespace std;

class point {
    int x, y;
    friend void distance(point, point);
    public:
    point(int a, int b) {
        x = a;
        y = b;
    }
    void displayPoint() {
        cout << "Point is : (" << x << "," << y << ")" << endl;}
};

void distance(point p1, point p2) {
    int x_diff = (p2.x - p1.x);
    int y_diff = (p2.y - p1.y);
    int diff = sqrt(pow(x_diff, 2) + pow(y_diff, 2));
    cout << "The difference is : " << diff << endl;
}
int main() {
    point m(1, 2);        //Implicit call
    point n = point(4, 6);//Explicit call


    point o = point(m);  //Exp
    point p(n);          //Imp


    distance(m, n);
    distance(o, p);
    return 0;
}