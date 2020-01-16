#include<bits/stdc++.h>
using namespace std;

long long arr[1000][1000],visited[1000][1000],visited1[1000][1000],far[2],flag=1;

long long dfs(vector<pair<long long, long long>> &ve,long long n, long long m){
    long long i,j,k;
    vector<pair<long long, long long>>temp;
    for(k=0;k<ve.size();k++){
        for(i=-1;i<=1;i++){
            for(j=-1;j<=1;j++){
                if(abs(i)+abs(j)<2 && ve[k].first+i>=0 && ve[k].first+i<=n && ve[k].second+j>=0 && ve[k].second+j<=m && visited[ve[k].first+i][ve[k].second+j]==0 && arr[ve[k].first+i][ve[k].second+j]==1){
                    visited[ve[k].first+i][ve[k].second+j]=1;
                    temp.push_back(make_pair(ve[k].first+i, ve[k].second+j));
                }
            }
        }
    }
    if(temp.size() == 0)return 0;
    ve.clear();ve=temp;temp.clear();
    return dfs(ve,n,m);
}
long long bfs(vector<pair<long long, long long>> &ve,long long steps,long long n, long long m){
    long long i,j,k;
    vector<pair<long long, long long>>temp;
    for(k=0;k<ve.size();k++){
        for(i=-1;i<=1;i++){
            for(j=-1;j<=1;j++){
                if(abs(i)+abs(j)<2 && ve[k].first+i>=0 && ve[k].first+i<=n && ve[k].second+j>=0 && ve[k].second+j<=m && visited1[ve[k].first+i][ve[k].second+j]==0 && arr[ve[k].first+i][ve[k].second+j]==1){
                    visited1[ve[k].first+i][ve[k].second+j]=1;
                    temp.push_back(make_pair(ve[k].first+i, ve[k].second+j));
                }
            }
        }
    }
    if(temp.size() == 0)return steps;
    ve.clear();ve=temp;temp.clear();
    return bfs(ve, steps+1,n,m);
}

int main(){
    long long i,j,k,l,m,n,t,_,temp,ve1[2];
    vector<pair<long long, long long>> ve;
    char ch;
    cin>>t;
    for(_=0;_<t;_++){
        cin>>m>>n;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>ch;if(ch == '#')arr[i][j]=0;
                if(ch == '.'){arr[i][j]=1;ve1[0]=i;ve1[1]=j;}
                visited[i][j]=0;
                visited1[i][j]=0;
            }
        }
        //for(i=0;i<n;i++){for(j=0;j<m;j++)cout<<arr[i][j]<<" ";cout<<endl;}
        //cout<<ve1[0]<<" "<<ve1[1]<<endl;
        visited[ve1[0]][ve1[1]]=1;
        ve.push_back(make_pair(ve1[0],ve1[1]));
        //cout<<ve[0].first<<" "<<ve[0].second<<endl;
        dfs(ve,n-1,m-1);
        //for(i=0;i<ve.size();i++)cout<<ve[i].first<<" "<<ve[i].second<<endl;
        far[0]=ve[0].first;far[1]=ve[0].second;
        //cout<<far[0]<<" "<<far[1]<<endl;
        visited1[far[0]][far[1]]=1;
        ve.clear();ve.push_back(make_pair(far[0],far[1]));
        cout<<"Maximum rope length is "<<bfs(ve,0,n-1,m-1)<<"."<<endl;
        ve.clear();
        flag = 1;
    }
    return 0;
}