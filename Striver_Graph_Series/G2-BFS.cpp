#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      //Function to return Breadth First Traversal of given graph
      vector<int>bfsOfGraph(int V,vector<int>adj[]){
         int vis[V]={0};
         vis[0] = 1;
         queue<int>q;
         //push the initial starting node
         q.push(0);
         vector<int>bfs;

         while(!q.empty()) {
            //get the topmost elelemnt in the queue
            int node = q.front();
            q.pop();
            bfs.push_back(node);

            //traverse for all its neighbours
            for(auto it : adj[node]) {
              // if the neighbour has previously not been visited, 
                // store in Q and mark as visited 
                if(!vis[it]) {
                    vis[it] = 1;
                    q.push(it);
                }
            }
         }

         return bfs;
      }

};

void addEdge(vector <int> adj[], int u , int v ) {
    adj[u].push_back(v);
    adj[v].push_back(u);
} 

void printAns(vector <int> &ans) {
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}


int main(){
     vector <int> adj[5];

     addEdge(adj, 0 , 1);
     addEdge(adj, 1 , 2);
     addEdge(adj, 1 , 3);
     addEdge(adj, 0 , 4);

     Solution obj;
     vector <int> ans = obj.bfsOfGraph(5,adj);
     printAns(ans);

     return 0;

}

//algo 

/*
   1. create  adjancacy list and add edges with addEdge function
   2. make solution class after that create obj and call object with vector ans 
   3. In class solution create bfsfunction
       i.create visited array , queue , then perform while(!q.empty())
   4. then return printans
*/