// in this program we are going to perform postorder traversal iteratively
// postorder using one stack
// postorder = left right root


#include "BTNode.cpp"


vector<int> postorderusing1stack(BTNode* root) {
vector<int> ans;
if(!root) return ans;
BTNode* curr = root;
stack<BTNode*> st;
while(curr || !st.empty()) {
    if(curr)// "curr" is same as "curr != NULL"
     {
        st.push(curr);
        curr = curr->left;
    } 
    else {
        BTNode* temp = st.top()->right;
        if(!temp){
         temp = st.top();
        ans.push_back(temp->data);

      while(!st.empty() && temp==st.top()->right ) {
        temp = st.top();
        st.pop();
        ans.push_back(temp->data);
      } 
        } else {
            curr = temp;
        }

    }
    return ans;
}
}

int main() {
    return 0;
}