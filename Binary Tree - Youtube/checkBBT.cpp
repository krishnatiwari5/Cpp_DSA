// Check for Balanced Binary Tree

#include "BTNode.cpp"
// solution 1 taking O(N^2)
int height(BTNode* root) {
    if(!root) return 0;
    int lh = height(root->left);
    int rh = height(root->right);

    return 1 + max(lh, rh);
}

bool checkBalancedBinaryTree(BTNode* root) {
    if(!root) return true;

    int lh = height(root->left); 
    int rh = height(root->right);
    if(abs(lh-rh) <= 1) return true;
    else {
        return false;
    }

    return checkBalancedBinaryTree(root->left) && checkBalancedBinaryTree(root->right);

}


// solution 2 O(N) using height of binary tree code

// if binary tree is balance then return height of tree else return -1

int check(BTNode* root) {
    if(!root) return 0;
    int lh = check(root->left);
    int rh = check(root->right);

// this two extra line can solve this problem
    if(lh == -1 || rh == -1) return -1; // if any left call or right call give -1 mean it is not balanced bt so, return -1.
    if(abs(lh-rh) > 1) return -1;


    return 1 + max(lh, rh);
}
