int f(int W, int wt[], int val[], int n,vector<vector<int>>&dp){
           if(n==0){
            if(wt[0]<=W){
                return val[0];
            }
            
                return 0;
        
        }
        if(dp[n][W]!=-1){
            return dp[n][W];
        }
        int  not_take=-1e8, take=-1e8;
       not_take=f(W,wt,val,n-1,dp);
       if(wt[n]<=W)
        take=val[n]+f(W-wt[n],wt,val,n-1,dp);
        return dp[n][W]=max(take,not_take);
    }
    
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
     vector<vector<int>>ans(n,vector<int>(W+1,-1));
       return f(W,wt,val,n-1,ans);
       
    }
