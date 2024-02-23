#include<iostream>
using namespace std;

class Node {
          int data;
          Node* left;
          Node* right;

    public:
    
    Node* solve(Node* root,int &k,int node){

      //base case
      if(root==NULL){
        return NULL;
    
      }
      if(root->data==node){
        return root;
      }

      Node* leftAns=solve(root->left,k,node);
      Node* rightAns=solve(root->right,k,node);
      //we have to return
      if(leftAns!=NULL && rightAns==NULL){
        k--;
        if(k<=0){
          //answer lock
          k=INT16_MAX;//we take large variable to store so k value not zero in return case
          return root;
        }
        return leftAns;
      }

       if(leftAns==NULL && rightAns!=NULL){
        k--;
        if(k<=0){
          //answer lock
          k=INT16_MAX;//we take large variable to store so k value not zero in return case
          return root;
        }
        return rightAns;
      }
      return NULL;
    }

    int KthAncestor(Node *root,int k,int node) {

        Node* ans =solve(root,k,node);
        if(ans == NULL || ans->data==node){//ans->data==node use for handling root node codn or case
            return -1;
        }
        else{
        return ans->data;
    }


}
};
