#include<iostream>
#include<queue>
using namespace std;

template<typename T>
class BTNode {
    public:
    T data;
    BTNode* left;
    BTNode* right;

    BTNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~BTNode() {
      delete left;
      delete right;  
    }
};


BTNode<int>* takeInput() {
    int rootData;
    cout<<"Enter Data" <<endl;
    cin>>rootData;
    if(rootData == -1) {
        return NULL;
    }
    BTNode<int>* root = new BTNode<int>(rootData);
    //  BTNode<int>* leftChild = takeInput();
    //  BTNode<int>* rightChild = takeInput();

    //  root->left = leftChild;
    //  root->right = rightChild;

    // we can write above statement in shorter way

    root->left = takeInput();
    root->right = takeInput();

     return root;
}

BTNode<int>* takeInputLevelWise() {
    int rootData;
    cout<<"Enter root data "<<endl;
    cin>>rootData;
    BTNode<int>* root= new BTNode<int>(rootData);
    queue<BTNode<int>*> q;
    q.push(root) ;
    while(!q.empty()) {
        BTNode<int>* f= q.front();
        q.pop();
        cout<<"Enter left child of "<<f->data<<endl;
        int leftChildData;
        cin>>leftChildData;
        if(leftChildData != -1) {
            BTNode<int>* child = new BTNode<int>(leftChildData); // Create
            q.push(child); // Push
            f->left = child; // Connect
        }
             cout<<"Enter right child of "<<f->data<<endl;
        int rightChildData;
        cin>>rightChildData;
        if(rightChildData != -1) {
            BTNode<int>* child = new BTNode<int>(rightChildData);
            q.push(child);
            f->right = child;
        }
        
    }
    return root;
}



void printTree(BTNode<int>* root) {
   if(root == NULL) {
    return;
   }
    cout<<root->data<<": ";
    if(root->left) {
        cout<<"L"<<root->left->data<<" ";
    }
    if(root->right) {
        cout<<"R"<<root->right->data<<" ";
    }
    cout<<endl;
    printTree(root->left);
    printTree(root->right);
}

void printTreeLevelWise(BTNode<int>* root) {
    if(root == NULL) {
        return;
    }
    queue<BTNode<int>*> q;
    q.push(root);
    q.push(NULL);  ///  For Terminating Conditions and for Changing the Level

    while(!q.empty()) {
        BTNode<int>* f = q.front();
        if(f) {
          cout<<f->data<<" ";
        }
       
        q.pop();

         if(f==NULL) {
            cout<<endl;
            if(!q.empty()){
              q.push(NULL);  
            }
            
        }  else {
       
         if(f->left) {
                q.push(f->left);
            }
         if(f->right) {
                q.push(f->right);
            }
        }
        
    }
}


int countNodes(BTNode<int>* root) {
  int ans = 1;
  if(root == NULL) {
    return 0;
  }
//   if(root->left) {
//     ans += countNodes(root->left);
//   }
//   if(root->right) {
//     ans += countNodes(root->right);
//   }
// return ans;

// shortcut way to write above code
return countNodes(root->left) + countNodes(root->right) + 1;

}


void inOrderTraversal(BTNode<int>* root) {
    if(root == NULL) {
        return;
    }

    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}
void preOrderTraversal(BTNode<int>* root) {
    if(root == NULL) {
        return;
    }
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    
    preOrderTraversal(root->right);
}
void postOrderTraversal(BTNode<int>* root) {
    if(root == NULL) {
        return;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}

// find maximum depth or Height of Binary Tree

int height(BTNode<int>* root) {
    if(root==NULL) return 0;

    int left = height(root->left);
    int right = height(root->right);
    int ans = max(left, right);
    return ans+1;
}


// check binary tree is Symmetric binary tree or not
// Conditions for trees to be Symmetric
// 1) Value of T1's root == Value of T2's root
// 2) T1's Left == T2's Right
// 3) T1's Right == T1's Left

bool helper(BTNode<int>* leftTree, BTNode<int>* rightTree) {
    if(leftTree==NULL && rightTree == NULL) return true;
    if((leftTree==NULL && rightTree!=NULL) || (leftTree!=NULL && rightTree == NULL) || (leftTree->data != rightTree->data)) {
        return false;
    }

    return helper(leftTree->left, rightTree->right) && (leftTree->right, rightTree->left);
}

bool isSymmetric(BTNode<int>* root) {
    if(root == NULL) return true;

    return helper(root->left, root->right);
}

bool searchNode(BTNode<int>* root, int key) {
if(root==NULL) return false;

if(root->data == key) return true;

return (searchNode(root->left, key) || searchNode(root->right, key));
}




int minValue(BTNode<int>* root) {
    if(root==NULL){
        return INT_MAX;
    }
    int leftMin = minValue(root->left);
    int rightMin = minValue(root->right);
// min function only takes two attributes
    return min(root->data, min(leftMin, rightMin));
}

void minValueOtherWay(BTNode<int>*root, int &ans) {
    if(root==NULL) {
        return;
    }
    ans = min(ans,root->data);
    minValueOtherWay(root->left, ans);
    minValueOtherWay(root->right, ans);
}

int maxValue(BTNode<int>* root) {
    if(root==NULL){
        return INT_MIN;
    }
    int leftMax = maxValue(root->left);
    int rightMax = maxValue(root->right);
// max function only takes two attributes
    return max(root->data, max(leftMax, rightMax));
}

void maxValueOtherWay(BTNode<int>*root, int &ans) {
    if(root==NULL) {
        return;
    }
    ans = max(ans,root->data);
    maxValueOtherWay(root->left, ans);
    maxValueOtherWay(root->right, ans);
}

int countLeafNode(BTNode<int>* root) {
    if(root==NULL) {
        return 0;
    }
    if(root->left == NULL && root->right == NULL) {
        return 1;
    }
    return countLeafNode(root->left) + countLeafNode(root->right);
}

void countLeafNodeOtherWay(BTNode<int>* root, int &ans) {
     if(root==NULL) {
        return;
    }
  if(root->left == NULL && root->right == NULL) {
    ans++;
    return;
  }
  countLeafNodeOtherWay(root->left, ans);
  countLeafNodeOtherWay(root->right, ans);

}

// find Diameter of Binary tree
// The diameter/width of a tree is defined as the number of nodes on the longest path between two end nodes. 

int height(BTNode<int>* root) {
    if(root==NULL) {
        return 0;
    }
    return 1 + max(height(root->left),height(root->right) );
}

int diameterOfBinaryTree(BTNode<int>* root) {
    int option1 = height(root->left) + height(root->right);
    int option2 = diameterOfBinaryTree(root->left);
    int option3 = diameterOfBinaryTree(root->right);

    return max(option1, max(option2, option3));
}

bool hasPath(BTNode<int>* root, int val, vector<int> &ans) {
    if(root == NULL) {
        return false;
    }
    ans.push_back(root->data);
    if(root->data == val) {
        return true;
    }
bool left = hasPath(root->left, val, ans);
bool right = hasPath(root->right, val, ans);

if(left || right) {
    return true;
}

ans.pop_back();
return false;

}

void getPath(BTNode<int>* root, int val,vector<int> &ans ) {
    if(root == NULL) {
        return ;
    }

    if(hasPath(root, val, ans)) {
        for(int i=0; i<ans.size() - 1; i++) {
            cout<<ans[i]<<"->";
        }
        cout<<ans[ans.size() - 1];
    }
}
 

   int main() {

 /* BTNode<int>* root = new BTNode<int>(1);
  BTNode<int>* n1 = new BTNode<int>(2);
  BTNode<int>* n2 = new BTNode<int>(3);

  root->left = n1;
  root->right = n2;*/

  BTNode<int>* root = takeInputLevelWise();
  printTree(root);

  cout<<"Searching for 11"<<endl;
  if(searchNode(root,11)){
    cout<<"found"<<endl;
  }else{
    cout<<"not found"<<endl;
  }
  cout<<"Min Value "<<minValue(root)<<endl;
  cout<<"Min value other way ";
  int mnVal = INT_MAX;
  minValueOtherWay(root,mnVal);
  cout<<mnVal<<endl;

   cout<<"Max Value "<<maxValue(root)<<endl;
  cout<<"Max value other way ";
  int mxVal = INT_MIN;
  maxValueOtherWay(root,mxVal);
  cout<<mxVal<<endl;

  cout<<"No of leaf nodes "<<countLeafNode(root)<<endl;
  cout<<"No of leaf nodes other way ";
  int count = 0;
  countLeafNodeOtherWay(root,count);
  cout<<count<<endl;

  vector<int> v;
  if(hasPath(root, 1, v)){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
  }else{
      cout<<"No path found bcoz value 1 not present"<<endl;
  }

  delete root;
  return 0;
}
