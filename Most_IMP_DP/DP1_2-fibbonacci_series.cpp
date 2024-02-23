#include<bits/stdc++.h>
using namespace std;

//this is tabulation approach
//TC:O(N)
//SC:O(N)

int main(){

    int n;
    cout<<"Enter your number: "<<endl;
    cin>>n;

    vector<int> dp(n+1,-1);

    dp[0]=0;
    dp[1]=1;

    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n];
    return 0;

}