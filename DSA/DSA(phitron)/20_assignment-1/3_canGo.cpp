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
string dfs(int si, int sj){
    // cout<<si<<","<<sj<<endl;
    vis[si][sj]=true;
    for(int i=0; i<d.size(); i++){
        int ci=si+d[i].first;
        int cj=sj+d[i].second;

        if(valid(ci, cj) && !vis[ci][cj] && (mat[ci][cj]=='.' || mat[ci][cj]=='B')){
            if(mat[ci][cj]=='B'){
                return "YES";
            }
            // dfs(ci, cj);
            string result = dfs(ci, cj);
            if(result == "YES")
                return "YES";
        }
    }
    return "NO";
}
int main(){
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mat[i][j];
            if(mat[i][j]=='A'){
                si=i; sj=j;
            }
        }
    }
    memset(vis, false, sizeof(vis));
    cout<<dfs(si, sj);
    return 0;
}