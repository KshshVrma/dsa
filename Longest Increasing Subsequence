   
   
   
   Input:
N = 16
A[]={0,8,4,12,2,10,6,14,1,9,5
     13,3,11,7,15}
Output: 6
   
   
   
   
   
   int f(int n,int a[],int i,int prev_index,vector<vector<int>>&dp){
        if(i==n){
            return 0;
        }
        if(dp[i][prev_index+1]!=-1){
            return dp[i][prev_index+1];
        }
        int t=0;
        if(prev_index==-1||a[i]>a[prev_index])
        t=1+f(n,a,i+1,i,dp);
        int k=f(n,a,i+1,prev_index,dp);
        return dp[i][prev_index+1]=max(t,k);
        
        
    }
    int longestSubsequence(int n, int a[])
    {
       // your code here
       vector<vector<int>>dp(n,vector<int>(n+1,-1));
       return f(n,a,0,-1,dp);
    }
