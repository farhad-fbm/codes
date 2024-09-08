#include <bits/stdc++.h>
using namespace std;

int main(){
    // capacity increase with double
    vector<int> v={1,2,3,4,5};
    v.size();
    v.capacity();
    v.clear(); /*dont delete memomry*/
    v.empty(); /*return bool*/
    v.resize(2,5); /*2nd is default value, if size increase*/
    return 0;
}