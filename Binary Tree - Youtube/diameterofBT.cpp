// Diameter of Binary Tree

#include "BTNode.cpp"

// // solution 1 taking O(N^2)
int height(BTNode* root) {
    if(!root) return 0;
    int lh = height(root->left);
    int rh = height(root->right);

    return 1 + max(lh, rh);
}

int diameter(BTNode* root) {
    if(!root) return 0;

    int lh = height(root -> left);
    int rh = height(root->right);
    
    int ld = diameter(root->left);
    int rd = diameter(root->right);


return max(lh+rh+1, max(ld, rd));
    
}





// solution 2 O(N) using height of binary tree code

int findDiameter(BTNode* root, int &diameter ) {
    if(!root) return 0;
    int lh = findDiameter(root->left, diameter);
    int rh = findDiameter(root->right, diameter);
    diameter = max(diameter, lh+rh);
    return 1 + max(lh,rh);
}