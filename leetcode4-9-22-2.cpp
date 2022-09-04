/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
    int f(int s,int e,int k,int i,vector<vector<int>>&dp,int b){
         if(i==e&&k==0){
             return 1;
         }
         if(k==0&&i!=e){
             return 0;
         }
         if(dp[i-b][k]!=-1){
             return dp[i-b][k];
         }
         int left=f(s,e,k-1,i+1,dp,b);
         int right=f(s,e,k-1,i-1,dp,b);
         return dp[i-b][k]=left+right;
         
       
    }
    int numberOfWays(int startPos, int endPos, int k) {
        int t=k*2+1;
        int b=startPos-k;
        vector<vector<int>>dp(t,vector<int>(k+1,-1));
        return f(startPos,endPos,k,startPos,dp,b);
    }
int main()
{
   cout<<numberOfWays(1,2,3);

    return 0;
}
