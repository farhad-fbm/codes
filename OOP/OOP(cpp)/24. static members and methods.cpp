//static Data Members and Method

#include <bits/stdc++.h>
using namespace std;

class employee {
    int Id;
    static int count;  //this counting act over the class(don't object separately)
public:
    void set(void);
    void show(void);
    static void showcount(void);   //static method can accees only STATIC members(Count)
};




void employee::set(void) {
    cout << "enter id: ";
    cin >> Id;
    count++;
}
void employee::show(void) {
    cout << "this empoyee id is: " << Id << endl;
}
void employee::showcount(void) {
    // cout<<Id   error,cant access without static member
    cout << "emloyee serial: " << count << endl << endl;
}
int employee::count = 100;  //default static count=0




int main() {
    employee farhad, fahad, parvej;

    farhad.set();
    farhad.show();
    employee::showcount();  //difference of static methods

    fahad.set();
    fahad.show();
    employee::showcount();

    parvej.set();
    parvej.show();
    employee::showcount();

    return 0;
}