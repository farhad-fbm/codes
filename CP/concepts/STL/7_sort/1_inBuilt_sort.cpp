// sort( startAddress, ++endAddress)


#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[5]={ 2,7,1,46,3 };
    sort(a, a+5);  //address of a[0] == a; 

    vector<int> v={ 1,2,5,2,8 };
    sort(v.begin(), v.end());

    return 0;
}