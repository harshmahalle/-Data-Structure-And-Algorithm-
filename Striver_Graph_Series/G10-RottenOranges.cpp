#include<bits/stdc++.h>

using namespace std;

class Solution {
  public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector < vector < int >> & grid) {
      // figure out the grid size
      int n = grid.size();
      int m = grid[0].size();

      // store {{row, column}, time}
      queue < pair < pair < int, int > , int >> q;
      int vis[n][m];
      int cntFresh = 0;
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
          // if cell contains rotten orange
          if (grid[i][j] == 2) {
            q.push({{i, j}, 0}); 
            // mark as visited (rotten) in visited array
            vis[i][j] = 2;
          }
          // if not rotten
          else {
            vis[i][j] = 0;
          }
          // count fresh oranges
          if (grid[i][j] == 1) cntFresh++;
        }
      }

      int tm = 0;
      // delta row and delta column
      int drow[] = {-1, 0, +1, 0};
      int dcol[] = {0, 1, 0, -1}; 
      int cnt = 0;

      // bfs traversal (until the queue becomes empty)
      while (!q.empty()) {
        int r = q.front().first.first;
        int c = q.front().first.second;
        int t = q.front().second;
        tm = max(tm, t);
        q.pop();
        // exactly 4 neighbours 
        for (int i = 0; i < 4; i++) {
          // neighbouring row and column
          int nrow = r + drow[i];
          int ncol = c + dcol[i];
          // check for valid cell and 
          // then for unvisited fresh orange
          if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
            vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1) {
            // push in queue with timer increased
             q.push({{nrow, ncol}, t + 1}); 
            // mark as rotten
            vis[nrow][ncol] = 2;
            cnt++;
          }
        }
      }

      // if all oranges are not rotten
      if (cnt != cntFresh) return -1;

      return tm;

    }
};

int main() {

  vector<vector<int>>grid{{0,1,2},{0,1,2},{2,1,1}};
  Solution obj;
  int ans = obj.orangesRotting(grid);
  cout << ans << "\n";

  return 0;
}

/*
//optimized approach but difficult to understand
int orangesRotting(vector<vector<int>>& grid) {
      if(grid.empty()) return 0;
      int m = grid.size() , n = grid[0].size() , days = 0, tot = 0, cnt = 0;
      queue<pair<int , int>>rotten;
      for(int i=0; i < m ; ++i) {
         for(int  j = 0 ; j < n ; ++j){
            if(grid[i][j] != 0)  tot++;
            if(grid[i][j] == 2)  rotten.push({i,j});
         }
      }

      int dx[4] = {0,0,1,-1};
      int dy[4] = {1,-1,0,0};

      while(!rotten.empty()) {
           int k = rotten.size();
           cnt += k;
           while(k--) {
               int x = rotten.front().first, y = rotten.front().second;
                rotten.pop();
                for(int i = 0 ; i < 4 ; ++i) {
                    int nx = x + dx[i] , ny = y + dy[i];
                    if(nx < 0 || ny < 0 || nx >= m || ny >= n || grid[nx][ny] != 1) continue;
                    grid[nx][ny] = 2;
                    rotten.push({nx, ny});
                }
           }
           if(!rotten.empty()) days++;
      }
      return tot == cnt ? days : -1;
}

int main() {
     vector<vector<int>> v{{2,1,1},
                           {1,1,0},
                           {0,1,1}};

     int rotting = orangesRotting(v);
     cout<<"Minimum Number of Minutes Required "<<rotting<<endl;

} */