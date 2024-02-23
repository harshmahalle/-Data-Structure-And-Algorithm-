#include<iostream>
#include<map>
using namespace std;

//refer gfg for inorder preorder postorder constrction tree
/*
class Node {

    public:

    void createMapping(int in[],map<int,int> nodeToindex,int n){
        for(int i=0;i<n;i++){
            nodeToindex[in[i]]=i;

        }
    }

    Node* solve(int in[],int pre[],int &index,int inorderStart,int inorderEnd,int n) {

        //base case
        if(index >=n || inorderStart > inorderEnd){
            return NULL;
        }

        int element=pre[index++];
        Node* root=new Node(element);
        int position=nodeToindex[element];

    }


    

Node* buildTree (int in[],int pre[],int n){

    int preOrderIndex=0;
    map<int,int>nodeToindex;
    createMapping(in,nodeToindex,n);
    Node* ans=solve(in,pre,preOrderIndex,0,n-1,n);
    return ans;
}

}; */