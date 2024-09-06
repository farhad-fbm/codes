#include <bits/stdc++.h>
using namespace std;

class item{
    int id,price;
    public:
    void set(int i,int p){id=i; price=p;}
    void get(){cout<<"ID,Price: "<<id<<","<<price<<endl;}
};
int main() {
    item *ptr= new item[3];
    item *ptrtemp=ptr;

    int a,b;
    for(int i=0; i<3; i++){
        cout<<"enter ID,Price: "; cin>>a>>b;

        ptr -> set(a,b);  //  (*ptr).set(a,b);
        ptr++;
    }
    for(int i=0; i<3; i++){
        ptrtemp -> get();
        ptrtemp++;
    }
    return 0;
}