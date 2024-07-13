// in this program we are going to perform preorder traversal iteratively

// preorder = root left right

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class BTNode {
    public:
    int data;
    BTNode* left;
    BTNode* right;

    BTNode(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

vector<int> preorder(BTNode* root) {
    vector<int> ans;
    if(!root) return ans;
    stack<BTNode*> st;
    st.push(root);
    while(!st.empty()) {
        BTNode* node = st.top();
        st.pop();
        ans.push_back(node->data);
        if(node->right) st.push(node->right); // first right then left because stack if LIFO data structure
        if(node->left) st.push(node->left);

    }
    return ans;
}

int main() {
    return 0;
}