#include <bits/stdc++.h>
using namespace std;

int n, m, si, sj;
char mat[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> d={ {0,1},{0,-1},{1,0},{-1,0} };
bool valid(int i, int j){
    if(i<0 || i>=n || j<0 || j>=m) return false;
    return true;
}
void dfs(int si, int sj){
    // cout<<si<<","<<sj<<endl;
    vis[si][sj]=true;
    for(int i=0; i<d.size(); i++){
        int ci=si+d[i].first;
        int cj=sj+d[i].second;

        if(valid(ci, cj) && !vis[ci][cj] && mat[ci][cj]=='.'){
            dfs(ci, cj);
        }
    }
    return;
}
int main(){
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mat[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    int count=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[i][j]=='.' && !vis[i][j]){
                count++;
                dfs(i, j);
                // cout<<i<<","<<j<<endl;
            }

        }
    }
    cout<<count;

    return 0;
}