#include<iostream>
#include<vector>
using namespace std;

int main() {

/*
    int n , m ;
    cin >> n >> m;
    //adjacency matrix for undirected graph
    //time complexity: O(n^2)
    int adj[n+1][n+1];

    for(int i = 0; i < m ; i++){
            int u, v;
            cin >> u >> v;
            adj[u][v] = 1;
            adj[v][u] = 1; //this statement will be remove in case of directed graph
    }
*/

    int n , m;
    cin >> n >> m;
    //adjacency list for undirected graph
    //time complecity:O(2E)
    vector<int>adj[n+1];
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // for directed graphs this case is remove and tc is O(E)
    }

    return 0;
}

