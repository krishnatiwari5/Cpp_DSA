// Preorder Inorder Postorder Traversals in One Traversal

#include "BTNode.cpp"

void preInPost(BTNode *root)
{
    vector<int> pre, in, post;
    stack<pair<BTNode *, int>> st;
    st.push({root, 1});
    if (root == NULL)
        return;
    while (!st.empty())
    {
        auto it = st.top();
        st.pop();

        // this is part of preorder
        // incement 1 to 2
        // push the left side of the tree

        if (it.second == 1)
        {
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);
            if (it.first->left)
                st.push({it.first->left, 1});
        }

        // this is a part of inorder
        // increament 2 to 3
        // push right

        else if (it.second == 2)
        {
            in.push_back(it.first->data);
            it.second++;
            st.push(it);
            if (it.first->right)
                st.push({it.first->right, 1});
        }

        // don't push it back again
        else
        {
            post.push_back(it.first->data);
        }
    }
}