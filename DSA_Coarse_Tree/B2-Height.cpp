#include<bits/stdc++.h>
using namespace std;
//logic
class Node {
   public:
      int data;
      Node* left;
      Node* right;

      Node(int d){
        this -> data=d;
        this -> left=NULL;
        this -> right=NULL;
      }
   

} ;

int height( Node* node ){
    //base case
    if(node == NULL){
        return 0;
    }

    int left = height(node->left) ;
    int right = height(node->right) ;

    int ans = max (left,right) + 1; // add 1 to account for the current node

    return ans;

   }
     