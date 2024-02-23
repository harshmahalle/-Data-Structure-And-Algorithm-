#include <iostream>
using namespace std;

// Class representing a node in the binary tree
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Function to build a binary tree using user input
Node* buildTree() {
    int data;
    cout << "Enter the data (or -1 to stop): ";
    cin >> data;

    // Base case: No more nodes to be inserted
    if (data == -1) {
        return nullptr;
    }

    // Create a new node with the entered data
    Node* newNode = new Node(data);

    // Recursively build left and right subtrees
    cout << "Enter the left child of " << data << ":" << endl;
    newNode->left = buildTree();
    cout << "Enter the right child of " << data << ":" << endl;
    newNode->right = buildTree();

    return newNode;
}

int main() {
    // Build the binary tree
    Node* root = buildTree();

    // Additional operations or traversals on the binary tree can be performed here

    return 0;
}
