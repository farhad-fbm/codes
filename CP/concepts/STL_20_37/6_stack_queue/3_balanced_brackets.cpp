#include <bits/stdc++.h>
using namespace std;


unordered_map<char, int> symbols={
    {'(',-1},{'{',-2},{'[',-3},
    {')', 1},{'}', 2},{']', 3}
};
string isBalanced(string s){
    stack<char> st;
    for(char brc : s){
        if(symbols[brc]<0){
            st.push(brc);
        }
        else{
            if(st.empty()) return "NO";
            if(symbols[st.top()]+symbols[brc] !=0){
                return "NO";
            }
            st.pop();
        }
    }
    if(st.empty()) return "YES";
    else "NO";
}
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        cout<< isBalanced(s)<<endl;;
    }
    return 0;
}