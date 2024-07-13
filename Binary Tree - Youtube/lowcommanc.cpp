// Lowest Common Ancestor in Binary Tree | LCA | C++ | Java

#include "BTNode.cpp"

BTNode* lowestCommonAncestor(BTNode* root, BTNode* p, BTNode* q) {
    // base case
    if(!root || root == p || root == q) {
        return root;
    }
    BTNode* left = lowestCommonAncestor(root->left, p, q);
    BTNode* right = lowestCommonAncestor(root->right, p, q);

    if(!left) return right;
    else if(!right) return left;
    else {
        // if both left and right are not null, we found our result
        return root;
    }
}