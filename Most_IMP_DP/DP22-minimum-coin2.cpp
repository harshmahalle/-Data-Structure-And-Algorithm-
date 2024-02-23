#include<bits/stdc++.h>
using namespace std;

long countWaysToMakeChangeUtil(vector<int>&arr,int ind,int T,vector<vector<long>>&dp){
    if(ind==0){
        return (T%arr[0]==0);
    }
    if(dp[ind][T]!= -1) return dp[ind][T];

    long notTaken=countWaysToMakeChangeUtil(arr,ind-1,T,dp);
    long taken=0;
    if(arr[ind]<=T)
        taken=countWaysToMakeChangeUtil(arr,ind,T-arr[ind],dp);

        return dp[ind][T]=notTaken+taken;
}

long countWaysToMakeChange(vector<int>&arr,int n,int T){
    vector<vector<long>>dp(n,vector<long>(T+1,-1));
    return countWaysToMakeChangeUtil(arr,n-1,T,dp);
}

int main(){
    vector<int>arr={1,2,3};
    int target=4;

    int n=arr.size();

    cout<<"the total number of ways is :"<<countWaysToMakeChange(arr,n,target);
    return 0;
}

/*
//tabulation
long countWaysToMakeChange(vector<int>&arr,int n,int T){
    vector<vector<long>>dp(n,vector<long>(T+1,0));
    //base condition
    for(int i=0;i<=T;i++){
        dp[0][i]=1;
    }
    for(ind=1;ind<n;ind++){
        for(target=0;target <= T;target++){
            long notTaken=dp[ind-1][target];
            long taken=0;
            if(arr[ind]<=T)
            taken=dp[ind][target-arr[ind]];

             dp[ind][target]=notTaken+taken;
        }
    }
    return dp[n-1][T];
}

//refer notes for space optimization
*/