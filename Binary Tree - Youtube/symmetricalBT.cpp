// Check for Symmetrical Binary Trees

#include "BTNode.cpp"

bool checkSymmetical(BTNode* root1, BTNode* root2 ) {
    
    // base case: if both trees are empty
    if(!root1 && !root2) return true;



       // return true if
    // 1. Both trees are non-empty, and
    // 2. The left subtree is the mirror of the right subtree, and
    // 3. The right subtree is the mirror of the left subtree
 
 if(root1->left->data != root2->right->data || root2->left->data != root1->right->data ) return false;
    

    return checkSymmetical(root1->left, root2->right) && checkSymmetical(root1->right, root2->left);
}
