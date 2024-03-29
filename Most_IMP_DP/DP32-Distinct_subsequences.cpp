#include<bits/stdc++.h>
using namespace std;

int prime=1e9+7;

int countUtil(string s1,string s2,int ind1,int ind2,vector<vector<int>>&dp){
    if( ind2 < 0) return 1;
    if( ind1 < 0) return 0;

    if( dp[ind1][ind2] != -1) return dp[ind1][ind2];

    if(s1[ind1]==s2[ind2]) {

        int leaveOne=countUtil(s1,s2,ind1-1,ind2-1,dp);
        int stay=countUtil(s1,s2,ind1-1,ind2,dp);

        return dp[ind1][ind2]=(leaveOne + stay) % prime;

    }

    else {

        return dp[ind1][ind2] = countUtil(s1,s2,ind1-1,ind2,dp);

    }
}

int subsequencesCounting(string &t,string &s,int lt,int ls){
    vector<vector<int>>dp(lt,vector<int>(ls,-1));
    return countUtil(t,s,lt-1,ls-1,dp);
}


int main(){
    string s1="babgbag";
    string s2="bag";

    cout<< "The Count of Distinct Subsequences is "<<subsequencesCounting(s1,s2,s1.size(),s2.size());
}

/*
  tabulation approach

  #include<bits/stdc++.h>
  using namespace std;

  int prime=1e9+7;

  int subsequenceCounting(string &s1,string &s2,int n,int m) {

    vector<vector<int>>dp(n+1,vector<int>(m+1,0));

    for(int i=0;i<n+1;i++) {
        dp[i][0]=1;
    }
    for(int i=1;i<m+1;i++) {
        dp[0][i]=0;
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){

            if(s1[i-1]==s2[j-1])
               dp[i][j] = (dp[i-1][j-1]+dp[i-1][j])%prime;
            else
               dp[i][j]=dp[i-1][j];
        }
    }

    return dp[n][m];
  }

  int main() {

     string s1="babgbag";
     string s2="bag";

     cout<< "The Count of Distinct subsequences is" <<subsequenceCounting(s1,s2,s1.size(),s2.size());
  }




*/