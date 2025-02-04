// Vertical order traversal of Binary tree

#include "BTNode.cpp"
#include<map>
#include<set>
#include<queue>

vector<vector<int>> verticalTraversal(BTNode* root) {
    map<int, map<int, multiset<int>>> nodes;
    queue<pair<BTNode* , pair<int,int>>> todo;
    todo.push({root, {0,0}});
    while(!todo.empty()) {
        auto p = todo.front();
        todo.pop();
        BTNode* node = p.first;
        int x = p.second.first, y = p.second.second;
        nodes[x][y].insert(node->data);
        if(node->left) {
            todo.push({node->left, {x-1, y+1}});
        }
        if(node->right) {
            todo.push({node->right, {x+1, y+1}});
        }
    }
    vector<vector<int>> ans;
    for(auto p : nodes) {
        vector<int> col;
        for(auto q : p.second) {
            col.insert(col.end(), q.second.begin(), q.second.end());
        }
        ans.push_back(col);
    }
    return ans;
}
