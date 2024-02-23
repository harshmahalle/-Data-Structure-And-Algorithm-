
//logic for searching in BST : recursion and itresion method

/*
   //recursion
   bool search(Node* root,int x){
    //base case
     if(root==NULL){
        return false;
     }

     if(root->data == x){
        return true;
     }
     if(root->data > x){
      //go left
        return search(root->left,x);
     }
     else{
      //go right
        return search(root->right,x);
     }
   }

   //itretion : we use it because there is tle in recursion method

   bool search(Node* root,int x){

    Node* temp=root;

    while(temp != NULL){
        if(temp->data==x){
            return true;
        }
        if(temp->data > x){
            temp=temp->left;
        }
        else{
            temp=temp->right;
        }
    }
    return false;
   }




*/
