#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={1,2,3,4,5};
    //  v.begin()==v[0];
    //  v.end() == v[last+1];

    vector<int> :: iterator it = v.begin();
    cout<<*(it+1)<<endl; //2nd element
    
    for( it;it<v.end(); it++){
        cout<<*it<<" ";
    }

    return 0;
}


/*
it+1 = next location;
it++ = next iterator

though vector is contigious, thus no problem happens
but list,map, next location in invalid, next iterator must be needed
*/