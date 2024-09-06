#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int x, y; cin>>x>>y;
        int ts=0;
        int tx=0;
        if(y==0 && x==0) ts=0;
        else if(y==0){
            if(x<=15) ts=1;
            else{
                ts=x/15;
                if(x%15) ts+=1;
            }
        }
        else if(y%2==0){  //even
            ts=y/2;
            tx= ts*7;
            if(tx<x){
                int need = x-tx;
                if(need<=15) ts+=1;
                else{
                    ts +=need/15;
                    if(need%15) ts+=1;
                }
            }

        }
        else{  //odd
            if(y==1){
                ts=1;
                tx=ts*11;
                if(tx<x){
                    int need = x-tx;
                    if(need<=15) ts+=1;
                    else{
                        ts +=need/15;
                        if(need%15) ts+=1;
                    }
                }
            }
            else{
                ts=y/2 +1;
                tx=(y/2)*7;
                tx += 11;
                if(tx<x){
                    int need = x-tx;
                    if(need<=15) ts+=1;
                    else{
                        ts +=need/15;
                        if(need%15) ts+=1;
                    }
                }
            }
        }
        cout<<ts<<endl;
    }
    return 0;
}