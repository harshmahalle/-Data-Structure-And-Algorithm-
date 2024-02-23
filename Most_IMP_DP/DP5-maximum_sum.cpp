#include<bits/stdc++.h>
using namespace std;

int solveUtil(int ind,vector<int>&arr,vector<int>& dp){
    //memoization approach
    if(ind==0) return arr[ind];
    if(ind<0)  return 0;

    if(dp[ind]!=-1) return dp[ind];

    int Pick = arr[ind] + solveUtil(ind-2,arr,dp);
    int nonPick = 0 + solveUtil(ind-1,arr,dp);

    return dp[ind]=max(Pick,nonPick);


}

int solve(int n,vector<int>& arr){
    vector<int>dp(n,-1);
    return solveUtil(n-1,arr,dp);
}

int main() {
    vector<int>arr{2,1,4,9};
    int n=arr.size();
    cout<<solve(n,arr);
}
/*

//tabulation approach
//TC:O(N)
//SC:O(N)

int solveUtil(int ind,vector<int>&arr,vector<int>& dp){
    
    dp[0]=arr[0];

    for(int i=1;i<n;i++){
    
    int Pick = arr[ind] ;
    if(i>1)
        Pick += dp[i-2];
    int nonPick = 0 + dp[i-1];
    dp[i]=max(Pick,nonPick);

}
    return dp[n-1];
}
*/

//space optimization refer striver channel