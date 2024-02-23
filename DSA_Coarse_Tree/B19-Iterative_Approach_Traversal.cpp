#include <iostream>
#include <stack>
using namespace std;

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Iterative inorder traversal
void inorderTraversal(TreeNode* root) {
    stack<TreeNode*> st;
    TreeNode* curr = root;

    while (curr != nullptr || !st.empty()) {
        while (curr != nullptr) {
            st.push(curr);
            curr = curr->left;
        }

        curr = st.top();
        st.pop();
        cout << curr->val << " ";

        curr = curr->right;
    }
}

// Iterative preorder traversal
void preorderTraversal(TreeNode* root) {
    if (root == nullptr) return;

    stack<TreeNode*> st;
    st.push(root);

    while (!st.empty()) {
        TreeNode* curr = st.top();
        st.pop();
        cout << curr->val << " ";

        if (curr->right != nullptr) st.push(curr->right);
        if (curr->left != nullptr) st.push(curr->left);
    }
}

// Iterative postorder traversal
void postorderTraversal(TreeNode* root) {
    if (root == nullptr) return;

    stack<TreeNode*> st;
    TreeNode* curr = root;
    TreeNode* lastVisited = nullptr;

    while (curr != nullptr || !st.empty()) {
        if (curr != nullptr) {
            st.push(curr);
            curr = curr->left;
        } else {
            TreeNode* peekNode = st.top();

            if (peekNode->right != nullptr && lastVisited != peekNode->right) {
                curr = peekNode->right;
            } else {
                cout << peekNode->val << " ";
                lastVisited = peekNode;
                st.pop();
            }
        }
    }
}

// Test the traversals
int main() {
    // Create a binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // Perform traversals
    cout << "Inorder traversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Preorder traversal: ";
    preorderTraversal(root);
    cout << endl;

    cout << "Postorder traversal: ";
    postorderTraversal(root);
    cout << endl;

    return 0;
}
