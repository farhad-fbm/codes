#include <bits/stdc++.h>
using namespace std;

int func2(int *p){cout<<&p<<endl;}
int func1(int *&p){cout<<&p<<endl;}


int main(){
    int val = 10;
    int * ptr = &val;
    
    cout<<&ptr<<endl;
    func1(ptr);
    func2(ptr);
    return 0;
}