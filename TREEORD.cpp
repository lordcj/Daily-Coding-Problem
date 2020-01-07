#include<bits/stdc++.h>
typedef long long lo;
using namespace std;

vector<lo> in, pre, post;

int check_tree(lo pre_ind, lo post_ind, lo in_ind,lo len){
    //cout<<pre_ind<<" ** "<<len<<" ## ";
    if(len==0)return 1;
    if(len==1){
        //cout<<"1 @@ "<<in[in_ind]<<" "<<pre[pre_ind]<<" "<<post[post_ind]<<endl;
        if(pre[pre_ind]==post[post_ind] && post[post_ind]==in[in_ind])return 1;
        else return 0;
    }
    lo indx=-1;
    for(int i=in_ind;i<in_ind+len;i++){
        if(in[i]==pre[pre_ind]){indx=i-in_ind;break;}
    }
    if(indx==-1)return 0;
    //cout<<indx<<" ";
    //cout<<"@@ "<<in[in_ind+indx]<<" "<<pre[pre_ind]<<" "<<post[post_ind+len-1]<<endl;
    if(!(in[in_ind+indx]==pre[pre_ind] && pre[pre_ind]==post[post_ind+len-1]))return 0;
    lo r1 = check_tree(pre_ind+1, post_ind, in_ind, indx) && check_tree(pre_ind+indx+1, post_ind+indx, in_ind+indx+1, len-indx-1);
    return r1;
}

int main(){
    lo n;
    lo te;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>te;
        pre.push_back(te);
    }
    for(int i=0;i<n;i++){
        cin>>te;
        post.push_back(te);
    }
    for(int i=0;i<n;i++){
        cin>>te;
        in.push_back(te);
    }
    lo ans = check_tree(0,0,0,n);
    if(ans==1)cout<<"yes";
    else cout<<"no";
    return 0;
}