#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v = { 0,1,2,3,2,5,6,2 };
    // v.push_back(1);
    // v.push_back(2);
    // v.pop_back();
    vector<int> v2 = { 41,42,43 };


    cout << *v.begin()<<endl;
    v.insert(v.begin(), 888);
    // v.insert(v.begin() + 3, v2.begin(), v2.end());

    for (int i = 0; i < v.size(); i++)  cout << v[i] << ' ';
    cout << endl;



    // v.erase(v.begin() + 1);
    // v.erase(v.begin() + 2, v.begin() + 5);

    // for (int i = 0; i < v.size(); i++)  cout << v[i] << ' ';
    // cout << endl;



    // replace(v.begin(), v.end(), 2, 200);
    // for (int i = 0; i < v.size(); i++)  cout << v[i] << ' ';
    // cout << endl;



    // // vector<int> :: iterator it;
    // // it = find(v.begin(),v.end(),6);

    // auto it = find(v.begin(),v.end(),6);
    // if(it == v.end())cout<<"not found"<<endl;
    // else cout<<"found : 6"<<endl;

    return 0;
}