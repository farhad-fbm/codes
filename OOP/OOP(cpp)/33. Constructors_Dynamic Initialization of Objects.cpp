#include <bits/stdc++.h>
using namespace std;

class bankdeposite {
    int principal;
    int year;
    float rate;
    float returnvalue;

    public:
    bankdeposite() {}  // for, if no parameters pass,so it's must   with { }
    bankdeposite(int p, int y, int r);  // r= 4
    bankdeposite(int p, int y, float R); // R=.04
    void print();

};
bankdeposite :: bankdeposite(int p, int y, int r) {
    principal = p;
    year = y;
    rate = float(r) / 100;   // int --> float
    returnvalue = principal;
    for (int i = 0; i < y; i++) {
        returnvalue = returnvalue * (1 + rate);
    }
}

bankdeposite :: bankdeposite(int p, int y, float R)
{
    principal = p;
    year = y;
    rate = R;
    returnvalue = principal;
    for (int i = 0; i < y; i++) {
        returnvalue = returnvalue * (1 + rate);
    }
}

void bankdeposite :: print() {
    cout << endl << "Principal was " << principal
        << ". Return after " << year
        << " years: " << returnvalue << endl;
}

int main() {
    bankdeposite bd1, bd2, bd3;
    int p, y, r;
    float R;


    cout << "Enter the value of p y and int,r" << endl;
    cin >> p >> y >> r;
    bd1 = bankdeposite(p, y, r);
    bd1.print();

    cout << "Enter the value of p y and flt,R" << endl;
    cin >> p >> y >> R;
    bd2 = bankdeposite(p, y, R);
    bd2.print();
    return 0;
}
