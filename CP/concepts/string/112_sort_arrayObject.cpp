#include <bits/stdc++.h>
using namespace std;

class student {
public:
    string name;
    int cls;
    int roll;
};
bool cmp(student a, student b) {
    // if (a.roll > b.roll) return true;
    // else return false;
    return a.roll < b.roll;
}
int main() {
    int n; cin >> n;
    student* a = new student[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].cls >> a[i].roll;
    }
    // for(int i=0; i<n-1; i++){
    //     for(int j=1; j<n; j++){
    //         if(a[i].roll > a[j].roll){
    //             swap(a[i],a[j]);
    //         }
    //     }
    // }


   
    sort(a, a+n, cmp);






    for (int i = 0; i < n; i++) {
        cout << a[i].name << " " << a[i].cls << " " << a[i].roll << endl;
    }
    return 0;
}