#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define F first
#define S second
#define pb push_back
#define endl "\n"
#define double long double
#define print(a) for(auto x:a) cout<<x<<" ";cout<<endl
#define print1(a) for(auto x:a)cout<<x.F<<" "<<x.S<<endl
int f(vector<int>vec,int i,int n,int curr,int tot,
  vector<vector<int>>&dp){
  if(i==n){
return tot;
  }
  if(i>n){
    return 0;
  }
if(dp[i][curr]!=-1){
  return dp[i][curr];
}
  int k=INT_MAX;
  if(i+1<=n){
  k=f(vec,i+1,n,i,tot+abs(vec[i]-vec[curr]),dp);
  }
 int l=INT_MAX;
 if(i+2<=n){

  l=f(vec,i+2,n,i,tot+abs(vec[i]+vec[curr]),dp);
 }
  return dp[i][curr]=min(k,l);


}

int32_t main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
int a;
cin>>a;
vector<int>vec;
for(int i=0;i<a;i++){
  int t;
  cin>>t;
  vec.push_back(t);
}
vector<vector<int>>dp(a,vector<int>(a,-1));


cout<<f(vec,0,a-1,0,0,dp);


  return 0;
}