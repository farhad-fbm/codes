#include <bits/stdc++.h>
using namespace std;

class student {
public:
    string name;
    int cls;
    int roll;
};
int main() {
    int n; cin >> n;
    student a[n]; /*  Static  */
    // student* a = new student[n];

    for (int i = 0; i < n; i++) {
        cin.ignore();
        // each name's before has "Enter"
        getline(cin, a[i].name);
        cin >> a[i].cls >> a[i].roll;
    }
    for (int i = 0; i < n; i++) {
        cout << a[i].name << " " << a[i].cls << " " << a[i].roll << endl;
    }
    cout << endl << endl << endl;



    // int mnI = 0;
    // int mn = INT_MAX;
    // for (int i = 0; i < n; i++) {
    //     if (a[i].roll < mn) {
    //         mnI = i;
    //         mn = a[i].roll;
    //     }
    // }
    // cout << a[mnI].name << " " << a[mnI].cls << " " << a[mnI].roll << endl;


    student mn;
    mn.roll = INT_MAX;
    for(int i=0; i<n; i++){
        if(a[i].roll < mn.roll){
            mn = a[i];
        }
    }
    cout<<mn.name<<" "<<mn.cls<<" "<<mn.roll;
    return 0;
}