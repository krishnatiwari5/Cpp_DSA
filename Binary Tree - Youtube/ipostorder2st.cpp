// in this program we are going to perform postorder traversal iteratively
// postorder using two stack
// postorder = left right root

#include "BTNode.cpp"


vector<int> postorder(BTNode* root) {
    vector<int> ans;
    if(!root) return ans;
    stack<BTNode*> st1, st2;
    st1.push(root);
    while(!st1.empty()) {
        BTNode* node = st1.top();
        st1.pop();
        st2.push(node);
        if(node->left) st1.push(node->left);
        if(node->right) st1.push(node->right); 
       

    }
    while(!st2.empty()) {
        ans.push_back(st2.top()->data);
        st2.pop();
    }
    return ans;
}

int main() {
    return 0;
}