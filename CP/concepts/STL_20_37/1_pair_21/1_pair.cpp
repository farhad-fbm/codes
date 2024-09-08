#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int, string> p;
    p ={ 1,"fbm" };

    pair<int, string>& p1=p;  //copy with ref
    p1.first=3;
    cout<<p.first<<' '<<p.second<<endl;

    return 0;
}