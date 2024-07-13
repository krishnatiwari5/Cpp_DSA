#include<iostream>
#include<vector>
using namespace std;

template<typename T>
class BTNode {
    public:
    T data;
    BTNode<T>* left;
    BTNode<T>* right;

    BTNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// recursive way
BTNode<int>* searchBST1(BTNode<int>* root, int val) {
    if(root==NULL) return NULL;
    if(root->data == val) return root;

    if(val > root->data) {
       return searchBST1(root->right, val);
    }

   else if(val < root->data) {
        return searchBST1(root->left, val);
    }

    return NULL;
}

// iterative way
BTNode<int>* searchBST2(BTNode<int>* root, int val) {
    while(root) {
        if(root->data == val) return root;

        if(val > root->data) {
            root = root->right;
        }
        else if(val < root->data) {
            root = root->left;
        }
    }
    return NULL;
}

// Minimum value in BST
// iterative way

int minV1(BTNode<int>* root) {
    if(root==NULL) return -1;
    while(root->left) {
        root = root->left;
    }
    return root->data;
}

int minV2(BTNode<int>* root) {
    if(root == NULL) return -1;
    if(root ->left == NULL) return root->data;
    return minV2(root->left);
}


int maxV(BTNode<int>* root) {
    if(root == NULL) return -1;
    while(root->right) {
        root = root->right;
    }
    return root->data;
}


int rangeSumBST(BTNode<int>* root, int L, int R) {
    if(root==NULL) return 0;

    int sum = 0;

    if(root->data >= L && root->data <=R){
        sum += root->data;

    }

    if(root->data > R) {
        sum += rangeSumBST(root->left, L, R);
    }  
    else if(root->data < L) {
        sum += rangeSumBST(root->right, L, R);
    } 
    else {
        sum += rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);
    }

    return sum;

}

bool helper(BTNode<int>* root, long long minV = -1000000000, long long maxV = 10000000000) {
if(root == NULL) {
    return true;
}

bool left = helper(root->left, minV, root->data);
bool right = helper(root->right, root->data, maxV);

if(left && right && root->data >minV && root->data < maxV) return true;
else return false;
}

bool isValidBST(BTNode<int>* root) {
return helper(root);
}

BTNode<int>* helper2(vector<int> arr, int s, int e) {
   if(s>e) {
    return NULL;
   } 
   int mid = (s+e)/2;
   int rootData = arr[mid];
   BTNode<int>* root = new BTNode<int>(rootData);
  root->left = helper2(arr, s, mid-1);
  root->right = helper2(arr, mid+1, e);
}

BTNode<int>* sortedArrayToBST(vector<int>& nums) {
    int n = nums.size();
    return helper2(nums, 0, n-1);
}



int main() {
    return 0;
}