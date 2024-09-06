#include <bits/stdc++.h>
using namespace std;

class student {
    protected:
    int roll;

    public:
    void setR(int r) { roll = r; }
    void getR(void) { cout << "roll no " << roll << endl; }
};
class exam : public student {
    protected:
    float math;
    float oop;

    public:
    void setM(float m, float o) { math = m; oop = o; }
    void getM() { cout << "marks of math:oop = " << math << ":" << oop << endl; }
};
class result : public exam {
    float percentage;
    public:
    void getResult() {
        getR();
        getM();
        cout << "result " << (math + oop) / 2 << "%" << endl;
    }
};
int main() {
    result fbm; // called by Grandson
    fbm.setR(204);
    fbm.setM(75.0, 87.0);
    fbm.getResult();
    return 0;
}