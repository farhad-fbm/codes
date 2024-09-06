#include <bits/stdc++.h>
using namespace std;

int main(){
    string s6 = "s6 farhad"; cout << s6 << endl;
    cout << *s6.begin() << endl;
    cout << *(s6.end() - 1) << endl;

    for(int i = 0; i < s6.size(); i++)
        cout << s6[i] << ' ';
    cout << endl;
    // ___________________POinter loop_____________
    for(auto i = s6.begin(); i < s6.end(); i++)
        cout << *i << ' ';
    cout << endl;
    return 0;
}