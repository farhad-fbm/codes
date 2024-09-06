#include <bits/stdc++.h>
using namespace std;

class student {
    protected:
    int r;
    public:
    void setNum(int R) { r = R; }
    void getNum() { cout << "Roll: " << r << endl; }
};
class test : virtual public student {
    protected:
    float m, p;
    public:
    void set_m(float M, float P) { m = M; p = P; }
    void get_m() { cout << "Maths: " << m<<endl<< "Physics: " << p<<endl; }
};
class sports : virtual public student {
    protected:
    int score;
    public:
    void set_s(int sc) { score = sc; }
    void get_s() { cout << "scores: " << score<<endl; }
};
class result : public test, public sports {
    private:
    float total;
    public:
    void get() {
        total = m + p + score;
        getNum();
        get_m();
        get_s();
        cout << "Total : " << total << endl;
    }
};


 
int main() {
    result fbm;
    fbm.setNum(222);
    fbm.set_m(75.0, 78.5);
    fbm.set_s(70);

    fbm.get();
    return 0;
}