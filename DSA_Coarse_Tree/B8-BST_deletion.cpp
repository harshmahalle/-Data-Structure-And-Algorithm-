#include<iostream>
#include<queue>
using namespace std;

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

};

Node* minVal(Node* root){
    Node* temp=root;

    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

Node* maxVal(Node* root){
    Node* temp=root;

    while(temp->right != NULL){
        temp = temp-> right;
    }
    return temp;
}

Node* deleteFromBST(Node* root,int val){

    //base case
    if(root==NULL)
    return root;

    if(root->data==val){
        //case 1:zero child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }

        //case 2:one child

        //in case of left child
        if(root->left != NULL && root->right == NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }

        //in case of right child
         if(root->left == NULL && root->right != NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }

        //case 3:two child
        if(root->left != NULL && root->right != NULL){

            int mini=minVal(root->right)->data;
            root->data=mini;
            root->right=deleteFromBST(root->right,mini);
            return root;
        }  

    }
    else if(root->data > val){
        //go left
        root->left=deleteFromBST(root->left,val);
        return root;
    }
    else{
        //go right
        root->right=deleteFromBST(root->right,val);
        return root;
    }

}

int main(){
    Node* root=NULL;
    int val;
    cin>>val;
    cout<<"Enter data to create BST"<<endl;

    cout<<"min value is :"<<minVal(root)->data<<endl;
    cout<<"max value is :"<<maxVal(root)->data<<endl;

    //deletion
    root=deleteFromBST(root,val);

    return 0;
}