#include<bits/stdc++.h>
using namespace std;

//this is memoization approach

//TC:O(N)
//SC:O(N)

int F(int n,vector<int>& dp){
    if(n<=1)
    return n;

    if(dp[n] != -1)
    return dp[n];

    return dp[n]=F(n-1,dp)+F(n-2,dp);


}

int main() {

    int n;
    cout<<"Enter your number"<<endl;
    cin>>n;

    vector<int>dp(n+1,-1);
    cout<<F(n,dp);
    return 0;
}