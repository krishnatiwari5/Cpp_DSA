// Top View of Binary Tree

#include "BTNode.cpp"
#include<queue>
#include<map>

vector<int> topView(BTNode* root) {
    vector<int> ans;
    if(!root) return ans;
    map<int, int> mpp;
    queue<pair<BTNode*, int>> q;
    q.push({root, 0});
    while(!q.empty()) {
        auto it = q.front();
        q.pop();
        BTNode* node = it.first;
        int line = it.second;
        if(mpp.find(line) == mpp.end()) mpp[line] = node->data;

        if(node->left) {
            q.push({node->left, line-1});
        }
        if(node->right) {
            q.push({node->right, line+1});
        }
    }
    for(auto it : mpp) {
        ans.push_back(it.second);
    }

    return ans;
}