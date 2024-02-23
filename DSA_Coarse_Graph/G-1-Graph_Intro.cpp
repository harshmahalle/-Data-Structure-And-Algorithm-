#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;

class graph {

    public:
         unordered_map<int,list<int>>adj;

         void addEdge(int u,int v,bool direction) {
            //direction= 0 -> undirected
            //direction= 1 -> directed

            //create an edge from u to v
            adj[u].push_back(v);

            if(direction==0) {
                adj[v].push_back(u);
            }

         }

        void printAdjList(){
             for(auto i:adj) {
                cout<<i.first<<" -> ";
                for(auto j:i.second){
                    cout<<j<<" ,";
                }
                cout<<endl;
             }
        }
};

int main() {

     int n;
     cout<<"Enter the number of nodes "<<endl;
     cin>>n;

     int m;
     cout<<"Enter the number of edges "<<endl;
     cin>>m;

     graph g;

     int adjMat[n+1][n+1];

     for(int i=0;i<m;i++) {
        int u,v;
        cin>>u>>v;
        //adjency matrix
        adjMat[u][v]=1;
        adjMat[v][u]=1; //undirected graph
        //creating an undirected graph
        g.addEdge(u,v,0);
     }

     //printing graph
     g.printAdjList();

     return 0;
}
