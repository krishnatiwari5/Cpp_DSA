// Maximum Depth in Binary Tree | Height of Binary Tree

#include "BTNode.cpp"
#include<queue>
// recursive
int height(BTNode* root) {
    if(!root) return 0;
    int lh = height(root->left );
    int rh = height(root->right);

    return 1 + max(lh, rh);

}

// iterative
int height2(BTNode* root) {
int ans = 0;
if (!root) return ans;
queue<BTNode*> q ;
q.push(root);
while(!q.empty()) {
 int size = q.size();
 for(int i =0; i<size; i++) {
    BTNode* node = q.front();
    q.pop();
    if(node->right) q.push(node->right);
    if(node->left) q.push(node->left);

 }
 ans++;
}
return ans;
}

