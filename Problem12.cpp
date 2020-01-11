#include<bits/stdc++.h>
using namespace std;

int dfs(vector<vector<long long>> &graph, int arr[], long long node, int visited[], long long *flag, int value){
    long long i;
    visited[node] = 1;
    for(i=0;i<graph[node].size();i++){
        if(visited[graph[node][i]] == 1){
            if(arr[graph[node][i]] == (value + 1)%2){*flag=0;return 0;}
        }
        if(visited[graph[node][i]] == 0){
            arr[graph[node][i]]=value;
            dfs(graph, arr, graph[node][i], visited, &(*flag), (value+1)%2);
            if(*flag == 0)return 0;
        }
    }
    return 0;
}

int main(){
    long long i,j,k,l,/*temp,*/temp1,t,n,m,s,e,flag;
    int visited[2001],arr[2001];
    vector<vector<long long>> graph;
    vector<long long>temp;
    cin >> t;
    for(j=0;j<t;j++){
        cin>>n>>m;
        flag = 1;
        for(i=0;i<n;i++){visited[i]=0;arr[i]=0;}
        for(i=0;i<n;i++){graph.push_back(temp);}
        for(i=0;i<m;i++){
            cin >> s >> e;
            graph[s-1].push_back(e-1);
            graph[e-1].push_back(s-1);
        }
        for(i=0;i<n;i++){
            if(visited[i]==0){
                arr[i] = 1;
                dfs(graph, arr, i, visited, &flag, 0);
                if(flag == 0)break;
            }
        }
        // for(i=0;i<n;i++){cout<<arr[i]<<visited[i]<<" ";}
        // cout<<endl;
        cout << "Scenario #" << j+1 <<":"<<endl;
        if(flag == 0){cout << "Suspicious bugs found!"<<endl;}
        else cout << "No suspicious bugs found!" << endl;
        graph.clear();
    }
}
