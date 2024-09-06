// pair<node,level>
#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];


void bfs(int src){
   queue<pair<int,int>> q;
   q.push({src,0}); /*src with level*/
   vis[src]=true;


   while(!q.empty()){
      // 1. pop parent
      pair<int,int> p = q.front();
      q.pop();
      // 2 task
      int par = p.first;
      int level = p.second;
      cout<<par<<" "<<level<<endl;
      // 3. push children
      for(int child : v[par]){
         if(vis[child] == false){
            q.push({child,level+1});
            vis[child]=true;
         }
      }
   }
}
int main(){
   int n, e; cin>>n>>e;
   while(e--){
      int a, b; cin>>a>>b;
      v[a].push_back(b);
      v[b].push_back(a);
   }
   memset(vis, false, sizeof(vis));
   int src; cin>>src;
   bfs(src);

   return 0;
}