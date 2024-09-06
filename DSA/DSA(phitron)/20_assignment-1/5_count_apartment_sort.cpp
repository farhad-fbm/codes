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
int dfs(int si, int sj,int count){
    vis[si][sj]=true;
    for(int i=0; i<d.size(); i++){
        int ci=si+d[i].first;
        int cj=sj+d[i].second;

        if(valid(ci, cj) && !vis[ci][cj] && mat[ci][cj]=='.'){
            count=dfs(ci,cj,count);
        }
    }
    return ++count;
}
int main(){
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mat[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    vector<int> v;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[i][j]=='.' && !vis[i][j]){
                int count=0;
                v.push_back(dfs(i, j,count));
            }

        }
    }
    sort(v.begin(),v.end());
    for(int val : v){
        cout<<val<<" ";
    }

    return 0;
}