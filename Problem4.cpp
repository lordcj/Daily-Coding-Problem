#include<bits/stdc++.h>
using namespace std;
typedef long long lo;

int main(){
    lo n,te;
    vector<lo> ve;
    cin>>n;
    for(lo i=0;i<n;i++){
        cin>>te;
        ve.push_back(te);
    }
    int l=0, r=n-1, n1=0;
    while(l<r){
        if(ve[l]<0){
            while(r>=0){
                if(ve[r]>=0)break;
                r--;
            }
            if(l<r)swap(ve[l],ve[r]);
        }
        n1=max(n1,l);
        l++;
    }
    if(n1==0){
        cout<<0<<endl;
    }
    lo mod = -1001000, x;
    for(lo i=0;i<n1;i++){
        if(ve[i]<0){
            x = ve[i]-mod;
        }else x = ve[i];
        if(x<n1 && x>=0)ve[x]+=mod;
    }
    lo ans = n1; 
    for(lo i=0;i<n1;i++)if(ve[i]>=0)ans=min(ans, i);
    cout<<ans;
    return 0;
}