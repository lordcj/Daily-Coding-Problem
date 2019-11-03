#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> ve(n,0),l(n,0),r(n,0);
    for(int i=0;i<n;i++)cin>>ve[i];
    int te=1;
    for(int i=0;i<n;i++){
        te = te*ve[i];
        l[i]=te;
    }
    te=1;
    for(int i=n-1;i>=0;i--){
        te = te*ve[i];
        r[i]=te;
    }
    for(int i=0;i<n;i++){
        te=1;
        if(i-1>=0)te=te*l[i-1];
        if(i+1<n)te=te*r[i+1];
        cout<<te<<" ";
    }
    return 0;
}