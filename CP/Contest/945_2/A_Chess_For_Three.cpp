#include <bits/stdc++.h>
using namespace std;

int fact(int x){
    int result =1;
    for(int i=1; i<=x; i++){
        result *=i;
    }
    return result;
}
int c(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}


int main(){
    int t; cin>>t;
    while(t--){
        int p1,p2,p3;
        cin>>p1>>p2>>p3;
        if((p1+p2+p3)%2){
            cout<<"-1"<<endl;
        }else{

            int s =(p1+p2+p3);
            if(s==0)cout<<s<<endl;
            else{
                int draw = c(p1, 1)*c(p2, 1) + c(p1, 1)*c(p3, 1) + c(p2, 1)*c(p3, 1);
                cout<<draw<<endl;
            }

            
            


        }
    }

    return 0;
}