// single_source_shortest path(  
    // unWeight----BFS
    // posWeight----dijkstra--------> in negWeight,its works.. but negWeight Cycle,shouldn't work
    // negWeight----bellman_ford


#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;
int dis[N];

class edge{
    public:
    int u, v, c;
    edge(int u, int v, int c){
        this->u=u;
        this->v=v;
        this->c=c;
    }

};
int main(){
    int n, e; cin>>n>>e;
    vector<edge> edgeList;
    while(e--){
        int u, v, c; cin>>u>>v>>c;
        edgeList.push_back(edge(u, v, c));
        // edgeList.push_back(edge(v, u, c));  //for unDirect
    }

    for(int i=0; i<n; i++){
        dis[i]= INT_MAX;
    }
    dis[0]=0; // source cost =0

   
    for(int i=0; i<n-1; i++){  // correct 1 node, for 1 iteration
        for(edge ed : edgeList){  //traverse every edge to fixed 1 node cost
            int u, v, c;
            u=ed.u;
            v=ed.v;
            c=ed.c;
            if(dis[u]<INT_MAX && dis[u]+c < dis[v]){
                dis[v]= dis[u]+c;
            }
        }
    }
    bool isCycle=false;
    for(edge ed : edgeList){  //extra 1 iteration, to check Negetive cycle
        int u, v, c;
        u=ed.u;
        v=ed.v;
        c=ed.c;
        if(dis[u]<INT_MAX && dis[u]+c < dis[v]){
            isCycle=true;
            break;
            // dis[v]= dis[u]+c;
        }
    }
    if(isCycle){
        cout<<"Cycle found, No answer"<<endl;
    }
    else{
        for(int i=0; i<n; i++){
            cout<<i<<"->"<<dis[i]<<endl;
        }
    }

    return 0;
}