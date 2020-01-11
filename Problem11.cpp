#include<bits/stdc++.h>
typedef long long lo;
using namespace std;

vector<vector<lo>> gr;
vector<lo> vis;
lo dfs(lo node){
    lo ret=1;
    vis[node]=1;
    for(lo i=0;i<gr[node].size();i++){
        if(!vis[gr[node][i]])ret+=dfs(gr[node][i]);
    }
    return ret;
}

int main(){
    lo t;
    cin>>t;
    while(t--){
        gr.clear();vis.clear();
        lo n,m,a,b;
        cin>>n>>m;
        for(lo i=0;i<n;i++)gr.push_back(vector<lo>(0,0));
        for(lo i=0;i<m;i++){
            cin>>a>>b;
            gr[--a].push_back(--b);
            gr[b].push_back(a);
        }
        vis.assign(n,0);
        lo ro=0,wa=1;
        for(lo i=0;i<n;i++){
            if(!vis[i]){
                lo x = dfs(i);
                wa = (wa*x)%1000000007;
                ro+=1;
            }
        }
        cout<<ro<<" "<<wa<<endl;
    }
    return 0;
}
