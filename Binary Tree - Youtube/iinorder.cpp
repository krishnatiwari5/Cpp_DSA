// in this program we are going to perform inorder traversal iteratively
// inorder = left root right

#include "BTNode.cpp" // this way we can import local or user defined files

vector<int> inorder(BTNode* root) {
    vector<int> ans;
    if(!root) return ans;
    BTNode* node = root;
    stack<BTNode*> st;
   
    while(true) {
        if(node) {
           st.push(root);
           node = node->left;
         
        }else {
            if(st.empty()) break;
            node = st.top();
             node = node->right;
        }
       
    }
    return ans;
}

int main() {
    return 0;
}