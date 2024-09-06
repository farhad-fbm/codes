#include <bits/stdc++.h>
using namespace std;

int main() {
    // string s0;
    // cout << "input with spaces : " << endl;
    // getline(cin, s0); cout << s0 << endl;
    // cout << endl << endl << endl;


    string s1;
    int int1;
    cin>>int1;
    cin.ignore();            /*Now you can press ""Enter" after give input "int1"*/
    // getchar();             /*Now you can press ""Enter" after give input "int1"*/
    getline(cin,s1);
    cout<<int1<<' '<<s1<<endl;
    return 0;
}