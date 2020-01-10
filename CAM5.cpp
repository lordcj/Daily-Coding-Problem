#include<bits/stdc++.h>
typedef long long lo;
using namespace std;

vector<vector<lo>> gr;
vector<lo> vis;

void dfs(lo node){
    vis[node]=1;
    for(lo i=0;i<gr[node].size();i++){
        if(!vis[gr[node][i]])dfs(gr[node][i]);
    }
}

int main(){
    lo t;
    scanf("%lld",&t);
    while(t--){
        gr.clear();vis.clear();
        lo n,m,a,b,ans=0;
        scanf("%lld",&n);
        scanf("%lld",&m);
        vis.assign(n,0);
        for(lo i=0;i<n;i++)gr.push_back(vector<lo>(0,0));
        for(lo i=0;i<m;i++){
            scanf("%lld %lld",&a,&b);
            gr[a].push_back(b);
            gr[b].push_back(a);
        }
        for(lo i=0;i<n;i++){
            if(!vis[i]){
                dfs(i);ans++;
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}