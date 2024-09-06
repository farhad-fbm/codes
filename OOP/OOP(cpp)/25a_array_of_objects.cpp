#include <bits/stdc++.h>
using namespace std;

class employee {
    int id;
    int salary;

    public:
    void set(void){cout<<"enter id,salry: "<<endl; cin>>id>>salary;}
    void get(void){cout<<"id,salary: "<<id<<","<<salary<<endl<<endl;}
};

int main() {
    employee arr[3];
    for (int i = 0; i < 3; i++) {
        arr[i].set();
        arr[i].get();
    }
    return 0;
}