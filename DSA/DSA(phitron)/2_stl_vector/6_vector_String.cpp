#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin >> n;
    vector<string> v;

    for (int i = 0; i < n; i++) {
        string x; cin >> x;
        v.push_back(x);
    }
    for (string val : v)cout << val << " ";
    cout << endl;




    int n2; cin >> n2;
    getchar();
    vector<string> v2(n);

    for (int i = 0; i < n2;i++) {
        getline(cin, v2[i]);
    }
    for (string val : v2)cout << val << endl;




    return 0;
}