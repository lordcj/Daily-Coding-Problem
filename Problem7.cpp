#include<bits/stdc++.h>
using namespace std;
typedef long long lo;

int main(){
    string s;
    cin>>s;
    vector<lo> dp(s.length()+1, 0);
    lo p = 0;
    for(lo i=0;i<s.length();i++){
        p = p*10 + (s[i]-'0');
        if(p%10==0){
            if(p==10 || p==20){
                if(i-2>=0)dp[i]+=dp[i-2];
                else dp[i]=1;
            }else{
                dp[i]=0;
            }
        }
        else if(p>26){
            if(i-1>=0)dp[i]+=dp[i-1];
            else dp[i]=1;
        }else if(p>10){
            if(i-1>=0)dp[i]+=dp[i-1];
            else dp[i]+=1;
            if(i-2>=0)dp[i]+=dp[i-2];
            else dp[i]+=1;
        }else{
            if(i-1>=0)dp[i]+=dp[i-1];
            else dp[i]=1;
        }
        p=s[i]-'0';
    }
    cout<<dp[s.length()-1];
    return 0;
}