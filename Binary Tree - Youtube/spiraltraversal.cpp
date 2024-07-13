// Zig-Zag or Spiral Traversal in Binary Tree

#include "BTNode.cpp"
#include<queue>
vector<vector<int>> zigzaglevelrOrder(BTNode* root) {
    vector<vector<int>> ans;
    if(!root) return ans;
    queue<BTNode*> q;
    q.push(root);
    bool leftToRight = true;
    while(!q.empty()) {
        int size = q.size();
        vector<int> row(size);
        for(int i=0; i<size; i++) {
            BTNode* node = q.front();
            q.pop();
            // find position to fill node's value
            int index = leftToRight ? i : (size - 1 - i);
            
            row[index] = node->data;
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        leftToRight = !leftToRight;
        ans.push_back(row);
    }
return ans;
}