// Maximum Path Sum in Binary Tree

#include "BTNode.cpp"

int maxPathSum(BTNode* root , int &ans) {
if(!root) return 0;
int ls = maxPathSum(root->left, ans);
int rs = maxPathSum(root->right, ans);

ans = max(ans, ls+rs+root->data);

return root->data + max(ls, rs);
}

