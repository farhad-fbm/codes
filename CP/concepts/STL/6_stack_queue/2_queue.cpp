#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<char> q;
    q.push('a');
    q.push('b');
    q.push('c');
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}