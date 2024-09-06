// track parent
// single source(one root only)

#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
int level[1005];
int parent[1005];

void bfs(int src){
	queue<int> q;
	q.push(src);
	vis[src]=true;
	level[src]=0;
	while(!q.empty()){
		// 1. pop parent
		int par=q.front();
		q.pop();
		// 2. task
		cout<<par<<" "<<level[par]<<endl;
		// 3.push children
		for(int child : v[par]){
			if(vis[child]==false){
				q.push(child);
				vis[child]=true;
				level[child]=level[par]+1;
				parent[child]=par; //track parent
			}
		}

	}
}
void path(int x){
	if(x==-1) return;
	path(parent[x]);  //recursively call parent
	cout<<x<<" ";
}
int main(){
	int n, e; cin>>n>>e;
	while(e--){
		int a, b; cin>>a>>b;    //an edge between a & b nodes
		v[a].push_back(b);     //adjancy list
		v[b].push_back(a);     //every nodes with an array of his connected nodes

	}
	memset(vis, false, sizeof(vis));
	memset(level, -1, sizeof(level));
	memset(parent, -1, sizeof(parent));
	int src, des; cin>>src>>des;
	bfs(src);
	path(des);
	return 0;
}