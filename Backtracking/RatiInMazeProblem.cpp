#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int new_x,int new_y,vector<vector<bool>>&vis,vector<vector<int>>&arr,int n){

    if((new_x >=0 && new_x<n)&&(new_y >=0 && new_y <n)&&vis[new_x][new_y] != 1 && arr[new_x][new_y]==1){
        return  true;
    }
    else {
        return false;
    }
}

void solve(int x,int y,vector<vector<int>>&arr,int n,vector<string>&ans,vector<vector<bool>>&vis,string path){

    //base case 
    if(x==n-1&&y==n-1) {
        ans.push_back(path);
        return;
    }

    //movement
    //D,L,R,U

    //Down
    vis[x][y]=1;
    if(isSafe(x+1,y,vis,arr,n)) {
        solve(x+1,y,arr,n,ans,vis,path+'D');
    }

    //left
    if(isSafe(x,y-1,vis,arr,n)) {
        solve(x,y-1,arr,n,ans,vis,path+'L');
    }
     
    //Right
    if(isSafe(x,y+1,vis,arr,n)) {
        solve(x,y+1,arr,n,ans,vis,path+'R');
    }
    
    //UP
    if(isSafe(x-1,y,vis,arr,n)) {
        solve(x-1,y,arr,n,ans,vis,path+'U');
    }

    vis[x][y]=0;
}

vector<string>searchMaze(vector<vector<int>>&arr,int n) {

    vector<string>ans;

    vector<vector<bool >>visited(n,vector<bool>(n,0));
    string path="";
    if(arr[0][0]==0)
      return ans;

      solve(0,0,arr,n,ans,visited,path);
      return ans;
}