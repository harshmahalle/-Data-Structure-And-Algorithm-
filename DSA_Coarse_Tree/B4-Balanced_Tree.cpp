#include<iostream>
using namespace std;

class Node {

      int data;
      Node* right;
      Node* left;


      pair<bool,int> isBalancedfast(Node* root){

        //base case
        if(root==NULL){
            pair<bool,int>p=make_pair(true,0);
            return p;
        }
       
       pair <bool,int> left = isBalancedfast(root -> left);
       pair <bool,int> right = isBalancedfast(root -> right);

       bool leftans=left.first;
       bool rightans=right.first;
       bool diff=abs(left.second-right.second) <= 1;

       pair<bool,int>ans;
       ans.second=max(left.second,right.second)+1;

       if(leftans && rightans && diff){
        ans.first=true;
       }
       else{
        ans.first=false;
       }
       return ans;
      }

      bool isBalanced(Node *root){

        return isBalancedfast(root).first;
      }

};