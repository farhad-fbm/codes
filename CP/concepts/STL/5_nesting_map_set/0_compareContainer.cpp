#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1={1,2};
    vector<int> v2={2,2};
    cout<<(v1<v2)<<endl;


    pair<int,int> p1={1,2};
    pair<int,int> p2={2,2};
    cout<<(p1<p2)<<endl;

    set<int> s1={8,1}; //sorted 
    set<int> s2={2,4};
    cout<<(s1<s2)<<endl;
    return 0;
}
/**
 * if(true) ==1
 * if(false)==0
 * 
 * compare 1st to 1st,
 * if 1st same,then
 * compare 2nd to 2nd
 */