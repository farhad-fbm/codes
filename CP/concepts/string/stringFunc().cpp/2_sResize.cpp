#include <bits/stdc++.h>
using namespace std;

int main(){
    string s2 = "s2 farhad bin"; cout << s2 << endl;
    cout << "size is : " << s2.size() << endl;
    s2.resize(8); cout << s2 << endl << "decrease to size : " << s2.size() << endl;
    s2.resize(10, 'p');
    cout << s2 << endl << "Increase to size with  'p' : " << s2.size() << endl;
    cout << endl << endl << endl;

    return 0;
}