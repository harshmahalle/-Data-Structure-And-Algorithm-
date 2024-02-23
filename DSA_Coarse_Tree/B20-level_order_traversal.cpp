#include<bits/stdc++.h>
using namespace std;
/*/
vector<vector<int>> levelOrder(TreeNode* root){
      vector<vector<int>>result;

      if(!root) {
        return result;
      }

      queue<TreeNode*>q;
      q.push(root);

      while(!q.empty()) {

        int levelSize = q.size();
        vector<int>levelValues;

        for(int i=0;i<levelSize;i++){
            TreeNode* node = q.front();
            q.pop();
            levelValues.push_back(node->val);

            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }

        result.push_back(levelValues);

      } 

      return resilt;
      
}


*/