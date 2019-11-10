#include<bits/stdc++.h>
using namespace std;
typedef long long lo;

int main(){
    lo n;
    cin>>n;
    vector<lo> ve(n,0);
    for(lo i=0;i<n;i++)cin>>ve[i];
    if(n==1){
        cout<<ve[0];
        return 0;
    }
    lo a = ve[0], b = ve[1], te, ans = max(a,b);
    for(lo i=2;i<n;i++){
        if(ve[i]+a >= a){
            te = ve[i]+a;
            ans = max(te,ans);
            a = max(a,b);
            b = te;
        }else{
            a = max(a,b);
            b = 0;
        }
    }
    cout<<ans;
    return 0;
}