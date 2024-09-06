#include <bits/stdc++.h>
using namespace std;

int main(){
    // vector<int> v;  /*type--1*/
    // vector<int> v(5);  /*type--2, with-0*/
    // vector<int> v(5,13);  /*type--3, with-13*/


    // vector<int> v2(5,33);  /* type-3*/
    // vector<int> v(v2);


    // int v2[6] ={1,2,3,4,5,6};  /* type-4*/
    // vector<int> v(v2, v2+6);

    vector<int> v={1,2,3,4};
    vector<int> v2 = v;  //O(n),copy by value;
    vector<int>& v2 = v; //O(1), copy by ref

    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<' ';
    }
    return 0;
}



/*
vector size declaration must be constant;
int n=100;         --X
const int n=100;   --ok
vector<int> v[n] XXX

*/