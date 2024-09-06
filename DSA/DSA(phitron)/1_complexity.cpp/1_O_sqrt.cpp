#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 1; i < n; i++) { /* O(N)*/
        if (n % i == 0) {
            cout << i << ' ';
        }
    }cout << endl;




    for (int i = 1; i <= sqrt(n); i++) { /* O(sqrt)*/
        if (n % i == 0) {
            cout << i << ' ';
            cout << n / i << " " << endl;
        }
    }cout << endl;

    return 0;
}