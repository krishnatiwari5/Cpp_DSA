// Print Root to Node Path in Binary Tree

#include "BTNode.cpp"

bool getPath(BTNode* root, int target, vector<int> &ans) {
    if(!root) return false;
    ans.push_back(root->data);

    if(root->data == target) return true;

    if(getPath(root->left, target, ans) || getPath(root->right, target, ans)) return true;

    ans.pop_back();
    return false;
   
    }


vector<int> getPath(BTNode* node, int val) {
    vector<int> ans;
    if(!node) return ans;
    getPath(node, val, ans);
    return ans; 
}