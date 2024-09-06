#include <bits/stdc++.h>
using namespace std;

class shop {
    int itemId[30];
    int itemPrice[30];
    int count;
public:
    void initcount(void) { count = 1; }
    void setPrice(void);
    void showPrice(void);
};

void shop::setPrice(void) {
    cout << " enter id and price,item no " << count << endl;
    cin >> itemId[count] >> itemPrice[count];
    count++;
}
void shop::showPrice(void) {
    for (int i = 1; i < count; i++) {
        cout << "Id " << itemId[i] << ",   price " << itemPrice[i] << endl;
    }
}


int main() {
    shop shop1;
    shop1.initcount();

    shop1.setPrice();
    shop1.setPrice();
    shop1.setPrice();

    shop1.showPrice();
    return 0;
}