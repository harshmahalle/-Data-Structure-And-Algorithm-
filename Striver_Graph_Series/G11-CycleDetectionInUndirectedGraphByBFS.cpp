#include <bits/stdc++.h>
using namespace std;

class Solution {
    private:
       bool detect(int src , vector<int>adj[] , int vis[]) {
              vis[src] = 1;

              //store source node and parent
              queue<pair<int,int>>q;
              q.push({src,-1});

              while(!q.empty()) {
                   int node = q.front().first;
                   int parent = q.front().second;
                   q.pop();

                   //go to all adjacent node
                   for(auto adjacentNode:adj[node]) {
                       if (!vis[adjacentNode]) {
                           vis[adjacentNode] = 1;
                           q.push({adjacentNode,node});
                       }
                       else if(parent != adjacentNode) {
                          return true;
                       }
                   }
              }

             return false;  

       }

    public:
       bool isCycle(int V,vector<int>adj[]) {
           int vis[V] = {0};
           for(int i=0 ; i < V ; i++) {
               if(!vis[i]) {
                    if(detect(i,adj,vis)) return true;
               }
           }

           return false;
       }
};

int main() {
     
      vector<int> adj[4] = {{} , {2} , {1,3} , {2}};
      Solution obj;

      bool ans = obj.isCycle(4,adj);

      if (ans)
        cout << "1\n";
      else
        cout << "0\n";

       return 0;
}