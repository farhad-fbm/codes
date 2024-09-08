#include <bits/stdc++.h>
using namespace std;

int main(){

    cout<<[](int x, int y){return x+y; }(5, 4) <<endl;

    auto sum =[](int x, int y){return x+y; };
    cout<<sum(2, 3);
    return 0;
}