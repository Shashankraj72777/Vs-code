#include <iostream>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

bool isBSTUtil(TreeNode* root, TreeNode* minNode, TreeNode* maxNode) {
    if (root == nullptr)
        return true;

    if ((minNode != nullptr && root->val <= minNode->val) ||
        (maxNode != nullptr && root->val >= maxNode->val))
        return false;

    return isBSTUtil(root->left, minNode, root) &&
           isBSTUtil(root->right, root, maxNode);
}

bool isBinarySearchTree(TreeNode* root) {
    return isBSTUtil(root, nullptr, nullptr);
}

int main() {
    
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

    if (isBinarySearchTree(root))
        std::cout << "The given binary tree is a binary search tree.\n";
    else
        std::cout << "The given binary tree is not a binary search tree.\n";

    return 0;
}
