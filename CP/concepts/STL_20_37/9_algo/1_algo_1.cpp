#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={ 1,3,6,2,7,2,2 };

    int min = *min_element(v.begin(), v.end());
    int max = *max_element(v.begin(), v.end());
    int sum = accumulate(v.begin(), v.end(), 0);
    int ct = count(v.begin(), v.end(), 2);
    auto it = find(v.begin(), v.end(), 2);
    reverse(v.begin(),v.end());
    string s="abcd";
    reverse(s.begin(),s.end());

    if(it !=v.end())
        cout<<"exist :"<<*it<<endl;
    else cout<<"not Fount \n";
    cout<<s<<endl;
    return 0;
}