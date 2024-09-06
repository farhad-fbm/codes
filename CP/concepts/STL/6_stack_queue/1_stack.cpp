// recursion
#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    st.push(2);
    st.push(3);
    st.push(4);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}

