// weighted grap, single sources sortest path




#include <bits/stdc++.h>
using namespace std;
const int N =100;
vector< pair<int, int>> v[N];
int dis[N];


void dijkstra_naive(int s){
    queue< pair<int, int>> q;
    q.push({ s,0 });
    dis[s]=0;
    while(!q.empty()){
        pair<int, int> parent = q.front();
        q.pop();

        int pNode = parent.first;
        int pCost = parent.second;
        for(pair<int, int> child : v[pNode]){
            int cNode=child.first;
            int cCost=child.second;

            if(pCost+cCost < dis[cNode]){
                // path relax
                dis[cNode]=pCost+cCost;
                q.push({ cNode,dis[cNode] });
            }
        }
    }
}
class cmp{
    public:
    bool operator()(pair<int,int> a, pair<int,int>b){
        return a.second > b.second;  // defult maxHeap, now ascending
    }
};
void dijkstra_optimized(int s){
    //defult,decending based on node
    // make ascending base on cost----> cmp class
    priority_queue< pair<int, int>, vector< pair<int, int>>, cmp  > pq;
    pq.push({ s,0 });
    dis[s]=0;
    while(!pq.empty()){
        pair<int, int> parent = pq.top();
        pq.pop();

        int pNode = parent.first;
        int pCost = parent.second;
        for(pair<int, int> child : v[pNode]){
            int cNode=child.first;
            int cCost=child.second;

            if(pCost+cCost < dis[cNode]){
                // path relax
                dis[cNode]=pCost+cCost;
                pq.push({ cNode,dis[cNode] });
            }
        }
    }
}
int main(){
    int n, e; cin>>n>>e;
    while(e--){
        int a, b, c; cin>>a>>b>>c;
        v[a].push_back({ b,c });
        v[b].push_back({ a,c });
    }
    // memset(dis,INT_MAX,sizeof(dis));
    for(int i=0; i<n; i++){
        dis[i]=INT_MAX;
    }
    // dijkstra_naive(0);
    dijkstra_optimized(0);
    for(int i=0; i<n; i++){
        cout<<i<<" "<<dis[i]<<endl;
    }
    return 0;
}