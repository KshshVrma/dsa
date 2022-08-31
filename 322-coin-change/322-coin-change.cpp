class Solution {
public:
    int f(vector<int>&coins,int amount,int i,int n,int sum,vector<vector<int>>&dp){
        if(amount==sum){
            i++;
            return 0;
        }
        if(i>=n){
            
            return 1e8;
        }
        int t=INT_MAX;
        if(amount<sum){
            return 1e8;
        }
        if(dp[sum][i]!=-1){
            return dp[sum][i];
        }
        if(amount-coins[i]>=0)
           t =1+f(coins,amount,i,n,sum+coins[i],dp);
        int l=f(coins,amount,i+1,n,sum,dp);
        return dp[sum][i]=min(t,l);
        
        
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(amount+1,vector<int>(n,-1));
        int k= f(coins,amount,0,n,0,dp);
        if(k>=1e8){
            return -1;
        }
        else return k;
    }
};