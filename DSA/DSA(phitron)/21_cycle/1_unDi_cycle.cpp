#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
bool vis[N];
vector<int> adj[N];
int parArray[N];
bool ans;

void bfs(int s){
    queue<int> q;
    q.push(s);
    vis[s]=true;
    while(!q.empty()){
        int parent = q.front();
        q.pop();
        // cout<<parent<<endl;
        for(int child : adj[parent]){
            if(vis[child] && parArray[parent] != child){
                ans=true;
            }
            if(!vis[child]){
                vis[child]=true;
                parArray[child]=parent;
                q.push(child);
            }
        }
    }
}
void dfs(int parent){
    vis[parent]=true;
    for(int child : adj[parent]){
        if(vis[child] && child != parArray[parent]){
            ans=true;
        }
        if(!vis[child]){
            dfs(child);
            parArray[child]=parent;
        }
    }

}
int main(){
    int n, e; cin>>n>>e;
    while(e--){
        int a, b; cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    memset(parArray, -1, sizeof(parArray));
    ans=false;
    for(int i=0; i<n; i++){
        if(!vis[i]){
            bfs(i);
        }
    }
    if(ans)cout<<"cycle found"<<endl;
    else cout<<"not found"<<endl;
    return 0;
}