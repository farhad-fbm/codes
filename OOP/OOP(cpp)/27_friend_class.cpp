#include <bits/stdc++.h>
using namespace std;

//Forward Decleration
class Complex;
class calculator {
    public:
    int sumR(Complex, Complex); // here sumR() defination with complex class is invalid
    int sumC(Complex, Complex);
};
class Complex {
    int a, b;
    /*friend FUNCtion
    friend int calculator :: sumR(Complex, Complex);
    friend int calculator :: sumC(Complex, Complex);*/

    // Friend CLASS
    friend class calculator;
    public:
    void set(int x, int y){ a=x; b=y; }
    void get(){ cout<<a<<" + "<<b<<"i"<<endl; }
};

//defination-------------(complex o1,complex o2)
int calculator :: sumR(Complex o1, Complex o2) {
    return(o1.a + o2.a);
}
int calculator :: sumC(Complex o1, Complex o2) {
    return(o1.b + o2.b);
}





int main() {
    Complex c1, c2;
    c1.set(2, 4);
    c1.get();

    c2.set(4, 6);
    c2.get();


    calculator sum;
    int resultR = sum.sumR(c1, c2);
    cout << "sum_real= " << resultR << endl;

    int resultC = sum.sumC(c1, c2);
    cout << "sum_comp= " << resultC << "i" << endl;
    return 0;
}