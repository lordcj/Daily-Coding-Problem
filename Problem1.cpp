 #include<bits/stdc++.h>
 using namespace std;

 int main(){
     int n;
     cin>>n;
     vector<int> ve;
     ve.assign(n,0);
     for(int i=0;i<n;i++){
         cin>>ve[i];
     }
     int k;
     cin>>k;
     sort(ve.begin(), ve.end());
     int l = 0, r = n-1;
     while(l<r){
         int x = k - ve[l];
         while(r>l){
             if(ve[r]==x){
                 cout<<"yes";return 0;
             }
             if(ve[r]>x)r--;
             if(ve[r]<x)break;
         }
         l++;
     }
     cout<<"no";
     return 0;
 }