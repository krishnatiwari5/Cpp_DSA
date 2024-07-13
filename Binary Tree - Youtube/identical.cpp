//  isSameTree it two trees are Identical or Not

#include "BTNode.cpp"


bool isSameTree(BTNode* root1, BTNode* root2) {


if((!root1 && root2) || (root1 && !root2) ) return false;

if(root1->data != root2->data) return false;
else return true;


return isSameTree(root1->left, root2->left) && isSameTree(root2->left, root2->right);

}