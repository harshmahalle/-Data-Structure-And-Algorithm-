//in belowe all the problem can use inorder approach
/*
// Q1: for validate BST problem

bool isBST(BinaryTreeNode<int> *root,int min,int max){

    //base case
    if(root==NULL){
        return true;
    }

    if(root->data >= min && root->data <= max){

        bool left=isBST(root->left,min,root->data);
        bool right=isBST(root->right,root->data,max);

        return left && right;
    }
    else{
        return false;
    }

}
//here we pass min as INT_MIN and INT_MAX as int max
//in approach 2 we use inorder as it gives in sorted order root data

*/

/* 

// Q2&3: logic for kth smallest element in BST and k th largest  we have to do as homework

int solve (BinaryTreeNode<int>* root,int& i,int k){
    //base case
    if(root==NULL){
        return -1;
    }
    //left
    int left=solve(root->left,i,k);

    if(left != -1){ //?
        return left;
    }
    //root node
    i++;
    if(i==k)
        return root->data;

    //right
    return solve(root->right,i,k);
}

*/

/*
//Q4:find the lca i.e. lowest common ancester 

   //base case 
   if(root==NULL)
    return NULL;

    if(root->data < p->data && root->data < Q->data){
        return LCAinaBST(root->right,P,Q);
    }

    if(root->data > p->data && root->data > Q->data){
        return LCAinaBST(root->left,P,Q);
    }

    return root;//in this case one is small and other is big and vice versa

    //for other approach interation refer pdf
    //Q5: pre and post decessor in bst refer pdf 


*/








