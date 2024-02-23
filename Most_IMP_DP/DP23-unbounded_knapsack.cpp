#include<bits/stdc++.h>
using namespace std;

int KnapsackUtil(vector<int>& wt,vector<int>& val,int ind,int W,vector<vector<int>>&dp){
       
       if(ind==0){
        return ((int)(W/wt[0])) * val[0];
       }
       if(dp[ind][W] != -1) return dp[ind][W];

       int notTaken=0+KnapsackUtil(wt,val,ind-1,W,dp);
       int taken=INT_MIN;
           taken=val[ind]+KnapsackUtil(wt,val,ind,W-wt[ind],dp);
         return dp[ind][W]=max(notTaken,taken);

}

int unboundedKnapsack(int n,int W,vector<int>& val,vector<int>&wt){
    vector<vector<int>>dp(n,vector<int>(W+1,-1));
    return KnapsackUtil(wt,val,n-1,W,dp);
}

int main() {
    vector<int>wt={2,4,6};
    vector<int>val={5,11,13};
    int W=10;

    int n=wt.size();
    cout<<"the maximum value of items,thief can steal is :"<<unboundedKnapsack(n,W,val,wt);
    return 0;
}
/*
//space optimization using one row array

int unboundedKnapsack(int n,int W,vector<int>&val,vector<int>&wt){
    vector<int> cur(W+1,0);
    //base condition

    for(int i=wt[0];i<=W;i++){
        cur[i]=((int)(W/wt[0])) * val[0];
    }

    for(ind=1;ind<n;ind++){
        for(int cap=0;cap<=W;cap++){
            int notTaken=cur[cap];
            int taken=INT_MIN;
            if(wt[ind] <= cap)
               taken=val[ind]+cur[cap-wt[ind]];
               cur[cap]=max(notTaken,taken);
        }
    }
    return cur[W];
}




*/