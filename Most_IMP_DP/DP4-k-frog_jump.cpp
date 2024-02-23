#include<bits/stdc++.h>
using namespace std;

//memoization approach
//TC:O(N*K)
//SC:O(N)

int solveUtil(int ind,vector<int>& height,vector<int>&dp,int k){

    if(ind==0) return 0;
    if(dp[ind]!=-1) return dp[ind];

    int mmsteps=INT_MAX;
    for(int j=1;j<=k;j++){
        if(ind-j>=0){
        int jump=solveUtil(ind-j,height,dp,k)+abs(height[ind]-height[ind-j]);
             mmsteps=min(jump,mmsteps);
        }

    }
      return dp[ind]=mmsteps;

}

int solve (int n,vector<int>& height,int k){
    vector<int>dp(n,-1);
    return solveUtil(n-1,height,dp,k);
}

int main(){
    vector<int>height{30,10,60,10,60,50};
    int n=height.size();
    int k=3;
    vector<int>dp(n-1);
    cout<<solve(n,height,k);
}

//tabulation approach
//TC:O(N*K)
//SC:O(N)

/*
 
   int solveUtil(int ind,vector<int>& height,vector<int>&dp,int k){

    dp[0]=0
    for(int i=1;i<n;i++){
    int mmsteps=INT_MAX;
    for(int j=1;j<=k;j++){
        if(ind-j>=0){
        int jump=dp[i-j]+abs(height[ind]-height[ind-j]);
             mmsteps=min(jump,mmsteps);
        }

    }
       dp[i]=mmsteps;
}
      return dp[n-1];

}


*/