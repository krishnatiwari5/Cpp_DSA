#include<iostream>
#include<vector>
#include<queue>
using namespace std;

template<typename T>
class TreeNode {
public:
T data;
vector<TreeNode<T>*> children;

TreeNode(int data) {
    this->data = data;
}

~TreeNode() {
    for(int i=0; i<children.size(); i++) {
        delete children[i];
    }
}

};
// using Recursion
TreeNode<int>* takeInput() {
    int rootData;
    cout<<"Enter the Data of Root Node"<<endl;
    cin>>rootData;
TreeNode<int> * root = new TreeNode<int>(rootData);
int n; // no. of children 
cout<<"Enter the number of children"<<endl;
cin>>n;

for(int i=1; i<=n; i++) {
    TreeNode<int> * child = takeInput();
    root->children.push_back(child);
}
return root;
}


// 3 steps to solve this problem
// create
// push
// connect
TreeNode<int>* takeInputLeveWise() {
   int rootData;
   cout<<"Enter root data"<<endl;
   cin>>rootData;

   TreeNode<int>* root = new TreeNode<int>(rootData);//create
   queue<TreeNode<int>*> q;
   q.push(root);

   while(!q.empty()) {
TreeNode<int>* f = q.front();
q.pop();

cout<<"Enter no. of children of "<<f->data<<endl;
int n; // no. of children
cin>>n;

for(int i=1; i<=n;i++) {
    int childData;
    cout<<"Enter "<<i<<" th child of "<<f->data<<endl;
    cin>>childData;

    TreeNode<int>* child = new TreeNode<int>(childData); // create
    q.push(child); // push
    f->children.push_back(child); // connect

}
   }
return root;
}


void printTree(TreeNode<int>* root) {
    if(root==NULL) {
        return ;
    }
    cout<<root->data<<": ";
    for(int i=0; i<(root->children.size()); i++) {
        cout<<root->children[i]->data<<", ";
    }
    cout<<endl;

    for(int i=0; i<(root->children.size()); i++) {
        printTree(root->children[i]);
    }
}

void printTreeLevelWise(TreeNode<int>* root) {
    queue<TreeNode<int>*> q;
    q.push(root);
    while(!q.empty()) {
        TreeNode<int>* f = q.front();
        q.pop();

        cout<<f->data<<": ";
        for(int i=0; i<f->children.size(); i++) {
            cout<<f->children[i]->data<<", ";
        }
        cout<<endl;

        for(int i=0; i<f->children.size(); i++) {
            q.push(f->children[i]);
        }
    }
}

int countNodes(TreeNode<int>* root) {
    if(root==NULL) {
        return 0; 
    }
    int ans =1;
    for(int i=0; i<root->children.size(); i++) {
        ans += countNodes(root->children[i]);
    }

    return ans;
}

int height(TreeNode<int>* root) {
    if(root==NULL) {
        return 0;
    }
    int mx=0; // maximum height;
    for(int i=0; i<root->children.size(); i++) {
        // int childHeight = height(root->children[i]);
        // if(childHeight > mx) {
        //     mx = childHeight;
        // }
        // By using max function;
        max(mx, height(root->children[i]));
    }
    return mx+1;
}

void printAtLevelK(TreeNode<int>* root, int k) {
    if(root == NULL) {
        return;
    }
    if(k==0) {
        cout<<root->data<<endl;
    }
    for(int i=0; i<root->children.size(); i++) {
        printAtLevelK(root->children[i], k-1);
    }
}

int countLeafNodes(TreeNode<int>* root) {
    if(root == NULL) {
        return 0;
    }
    if(root->children.size()==0) {
        return 1;
    }
    int ans=0;
    for(int i=0; i<root->children.size(); i++) {
        ans+= countLeafNodes(root->children[i]);
    }
    return ans;
}

void preOrder(TreeNode<int>* root) {
    if(root == NULL) {
        return;
    }
    cout<<root->data<<endl;
    for(int i=0; i<root->children.size(); i++) {
        preOrder(root->children[i]);
    }
}

void postOrder(TreeNode<int>* root) {
    if(root==NULL) {
        return;
    }
    for(int i=0;i<root->children.size(); i++) {
        postOrder(root->children[i]);
    }
    cout<<root->data<<endl;
}

void deleteTree(TreeNode<int>* root) {
    if(root==NULL) {
        return;
    }
    for(int i=0;i<root->children.size();i++) {
        deleteTree(root->children[i]);
    }
    delete root;
}

int main() {
    // TreeNode<int>* root = new TreeNode<int>(1);
    // TreeNode<int>* n1 = new TreeNode<int>(2);
    // TreeNode<int>* n2 = new TreeNode<int>(3);
    // root->children.push_back(n1);
    // root->children.push_back(n2);
// TreeNode<int>* root = takeInput();
    // printTreeL(root);
    TreeNode<int>* root = takeInputLeveWise();
    printTreeLevelWise(root);
    cout<<"No. of Leaf Nodes "<<countLeafNodes(root);
    // deleteTree();
    delete root;
    return 0;
}