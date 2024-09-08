#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={ 1,2,-3,4 };
    cout<<all_of(v.begin(), v.end(), [](int x){return x>0; });  //logical aAND
    cout<<none_of(v.begin(), v.end(), [](int x){return x>0; }); //logical AND
    cout<<any_of(v.begin(), v.end(), [](int x){return x>0; }); //Logical OR
    return 0;
}