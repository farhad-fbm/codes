#include <bits/stdc++.h>
using namespace std;
int n,m;
bool vis[20][20];
int level[20][20];
char a[20][20];
vector<pair<int,int>> d ={{0,1},{0,-1},{-1,0},{1,0}};
bool valid(int i, int j){
   if(i<0 || i>=n || j<0 || j>=m) return false;
   return true;
}
void bfs(int si, int sj){
   queue<pair<int, int>> q;
   q.push({ si,sj });
   vis[si][sj]=true;
   level[si][sj]=0;
   while(!q.empty()){
      // 1.pop parent
      pair<int,int> par=q.front();
      int pi=par.first;
      int pj=par.second;
      q.pop();
      // 3.task
      cout<<pi<<','<<pj<<endl;
      // 3.push children
      for(int i=0; i<4; i++){
         int ci=pi + d[i].first;
         int cj=pj + d[i].second;
         if(valid(ci,cj) && !vis[ci][cj]){
           q.push({ci,cj});
           vis[ci][cj]=true;
           level[ci][cj]=level[pi][pj]+1;
         }
      }
   }
}
int main(){
   cin>>n>>m;
   for(int i=0; i<n;i++){
      for(int j=0; j<m;j++){
         cin>>a[i][j];
      }
   }
   int si,sj; cin>>si>>sj;
   memset(vis, false, sizeof(vis));
   memset(level, -1, sizeof(level));
   bfs(si,sj);
   cout<<level[2][3]<<endl;
   return 0;
}