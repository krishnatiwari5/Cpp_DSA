
//  Right/Left View of Binary Tree

#include "BTNode.cpp"
#include <queue>
#include <map>

// iterative way

vector<int> rightView(BTNode *root)
{
    vector<int> ans;
    if (!root)
        return ans;
    map<int, int> mpp;
    queue<pair<BTNode *, int>> q;
    q.push({root, 0});

    while (!q.empty())
    {
        auto it = q.front();
        BTNode *node = it.first;
        int level = it.second;
        mpp[level] = node->data;
        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }
    for (auto it : mpp)
    {
        ans.push_back(it.second);
    }
    return ans;
}

vector<int> leftView(BTNode *root)
{
    vector<int> ans;
    if (!root)
        return ans;
    map<int, int> mpp;
    queue<pair<BTNode *, int>> q;
    q.push({root, 0});

    while (!q.empty())
    {
        auto it = q.front();
        BTNode *node = it.first;
        int level = it.second;
        if (mpp.find(level) == mpp.end())
        {
            mpp[level] = node->data;
        }
        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }
    for (auto it : mpp)
    {
        ans.push_back(it.second);
    }
    return ans;
}

// Recursive way

void rightViewRecursive(BTNode *root, int level, vector<int> &ans)
{

    if (!root)
        return;

    /// we are going to apply reverse preorder == Root Right Left
    if (ans.size() == level){
        ans.push_back(root->data);
    }
    rightViewRecursive(root->right, level + 1, ans);
    rightViewRecursive(root->left, level + 1, ans);
}


void leftViewRecursive(BTNode* root, int level, vector<int> &ans) {
    if(!root) return;

    // preorder traversal == Root Left Right
    if(ans.size() == level) {
ans.push_back(root->data);
    }
    leftViewRecursive(root->left, level + 1, ans);
    leftViewRecursive(root->right, level + 1, ans);
}