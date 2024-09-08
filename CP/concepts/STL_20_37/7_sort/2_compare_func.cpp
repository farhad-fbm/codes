#include <bits/stdc++.h>
using namespace std;


//cmp==false,the swap
bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.first != b.first){
        // if(a.first > b.first) return false;  //increasing
        // else return true;
        return a.first < b.first;
    }
    else{
        // if(a.second < b.second) return false; //decreasing
        // else return true;
        return a.second > b.second;
    }
}
int main(){
    // sort(start,++end,cmp) 
    vector<pair<int, int>> vp ={ {23,5},{22,11},{3,1},{3,12} };
    sort(vp.begin(), vp.end(), cmp);
    for(auto pr : vp)cout<<pr.first<<" "<<pr.second<<endl;
    return 0;
}