// Boundary Traversal in Binary Tree

#include "BTNode.cpp"

bool isLeaf(BTNode* root) {
    if(!root->left && !root->right) return true;

    return false;
}

vector<int> leftNodes(BTNode* root, vector<int> &ans) {
    BTNode* curr = root->left;
    while(curr) {
        if(!isLeaf(curr)) ans.push_back(curr->data);
        if(curr->left) curr = curr->left;
        else curr = curr->right;
    }  

}

vector<int> rightNodes(BTNode* root, vector<int> &ans) {
BTNode* curr = root->right;
vector<int> temp;
while(curr) {
    if(!isLeaf(curr)) temp.push_back(curr->data);
    if(curr->right) curr = curr->right;
    else curr = curr->left;
}
for(int i= temp.size()-1; i>=0 ; i--) {
    ans.push_back(temp[i]);
}
}

vector<int> leafNodes(BTNode* root, vector<int> &ans) {
    if(isLeaf(root)) {
        ans.push_back(root->data);
        return;
    }
    if(root->left) leafNodes(root->left, ans);
    if(root->right) leafNodes(root->right, ans);
}

vector<int> printBoundary(BTNode* root) {
    vector<int> ans;
    if(!root) return ans;
    if(!isLeaf(root)) ans.push_back(root->data);
    leafNodes(root, ans);
    leafNodes(root, ans);
    rightNodes(root, ans);
    return ans;
}