/* 
//logic for two sum in a bst

void inorder(BinaryTreeNode<int>* root,vector<int>&in){
    if(root==NULL)
    return;

    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);

}

bool twoSumINBST(BinaryTreeNode<int>* root,int target){
    vector<int>inorderVal;
    inorder(root,inorderVal);
    int i=0,j=inorderVal.size()-1;

    while(i<j) {
        int sum=inorderVal[i]+inorderVal[j];
        if(sum==target)
        return true;

        else if(sum>target)
        j--;

        else
        i++;
    }
    return false;
}


*/

/*
//logic for flatten bst to a sorted list

void inorder(TreeNode<int>* root,vector<int>&in){
    if(root==NULL)
    return;

    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);

}

treeNode<int>* flatten(treeNode<int>* root){
    vector<int>inorderVal;
    //store inorder -> sorted values
    inorder(root,inorderVal);
    int n=inorderVal.size();

    treeNode<int>* newRoot=new treeNode<int>(inorderVal[0]);
    treeNode<int>* curr=newRoot;

    //2nd step
    for(int i=1;i<n;i++){
        treeNode<int>*temp=new TreeNode<int>(inorderVal[i]);

        curr->left=NULL:
        curr->right=temp;
        curr=temp;
    }
    //3rd step

    curr ->left=NULL:
    curr-> right=NULL;

    return newRoot;
}
*/
/* 

//logic for normal bst to balanced bst

void inorder(BinaryTreeNode<int>* root,vector<int>&in){
    if(root==NULL)
    return;

    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);

}

TreeNode<int>* inorderToBST(int s,int e,vector<int>inorderVal){

    //base case
    if(s>e)
    return NULL:

    int mid=(s+e)/2;

    TreeNode<int>* root=new TreeNode<int>(in[mid]);
    root->left=inorderToBST(s,mid-1,in);
    root->right=inorderToBST(mid+1,e,in);
    return root;
}

TreeNode<int>* balancedbst(TreeNode<int>* root){
    vector<int>inorderVal;
    //storing inorder -> sorted values
    inorder(root,inorderVal);
    return inorderToBST(0,inorderVal.size()-1,inorderVal);

}



*/
//logic for preorder traversal refer pdf

