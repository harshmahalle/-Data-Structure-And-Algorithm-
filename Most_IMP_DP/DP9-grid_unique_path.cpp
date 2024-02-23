#include<bits/stdc++.h>
using namespace std;

//memoization approach
int mazeObstacleUtil(int i,int j,vector<vector<int>>&maze,vector<vector<int>>&dp){
     
    if(i>0 && j>0 && maze[i][j]==-1)
    return 0;

    if(i==0 && j==0) 
      return 1;

    if(i<0 || j<0) 
      return 0;

    if(dp[i][j] != -1) return dp[i][j];

     int up=mazeObstacleUtil(i-1,j,maze,dp);
     int left=mazeObstacleUtil(i,j-1,maze,dp);

     return dp[i][j]=up+left;

}

int mazeObstacle(int m,int n,vector<vector<int>>&maze){
    vector<vector<int>>dp(m,vector<int>(n,-1)); //it is way to create matrix of m*n
    return mazeObstacleUtil(m-1,n-1,maze,dp);
}

int main(){
    vector<vector<int>>maze{{0,0,0},{0,-1,0},{0,0,0}};
    int n=maze.size();
    int m=maze[0].size();

   cout<<mazeObstacle(m,n,maze);
}

//refer pdf for other approach