#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class BTNode {
    public :
    int data;
    BTNode* left;
    BTNode* right;
   
     BTNode(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

vector<vector<int>> levelwise(BTNode* root) {
    vector<vector<int>> ans;
    if(!root) return ans;
    queue<BTNode*> q;
    q.push(root);
    while(!q.empty()) {
        int size = q.size();
        vector<int> level;
        for(int i=0; i<size; i++) {
            BTNode* node = q.front();
            q.pop();
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            level.push_back(node->data);
        }
        ans.push_back(level);
    }
return ans;
}

int main() {

    return 0;
}