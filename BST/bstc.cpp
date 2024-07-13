// BST Class
#include<iostream>
using namespace std;

template<typename T>
class BTNode {
public :
T data;
BTNode<int>* left;
BTNode<int>* right;

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

class Pair{
    public:
    BTNode<int>* head;
    BTNode<int>* tail;
};

class BST {

    BTNode<int>* root;

    bool hasData(BTNode<int>*node, int data) {
        if(node == NULL) {
            return false;
        }
        if(node->data == data) {
            return true;
        }
        if(node->data > data) {
            return hasData(node->left, data);
        } else {
            return hasData(node->right, data);
        }
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

BTNode<int>* insert(BTNode<int>* node, int data) {
    if(node == NULL) {
        BTNode<int>* n = new BTNode<int>(data);
        return n;
    }
    if(data < root->data) {
       node->left = insert(node->left, data);
    } else {
        node->right = insert(node->right, data);
    }
   return node;
}

  BTNode<int>* deleteData(BTNode<int>* node, int data) {
    if(node == NULL) {
        return NULL;
    }
    if(data > node->data) {
      node->right =  deleteData(node->right, data);
    } else if(data < node->data) {
      node->left =  deleteData(node->left,data);
    } else {
        if(node->left == NULL && node->right == NULL) {
            BTNode<int>* temp = node->right;
            node->right = NULL;
            delete node;
            return NULL;
        } else if(node->right == NULL) {
            BTNode<int>* temp = node->left;
            node->left = NULL;
            delete node;
            return temp;
        } else {
            BTNode<int>* minNode = node->right;
            while(minNode->left != NULL){
                minNode = minNode->left;
            }
            int rightMin = minNode->data;
            node->data = rightMin;
          node->right =  deleteData(node->right, rightMin);
        }
    }
    return node;
  }


  Pair convertToLL(BTNode<int>* root) {
    if(root == NULL) {
        Pair ans;
        ans.head = NULL;
        ans.tail = NULL;
        return ans;
    }
     if(root->left == NULL && root->right == NULL) {
        Pair p;
        p.head = root;
        p.tail = root;
        return p;
     }
     else if(root->right == NULL && root->left != NULL) {
      Pair leftLL =  convertToLL(root->left);
      leftLL.tail->right = root;
      Pair ans;
      ans.head = leftLL.head;
      ans.tail = root;
      return ans;
     } else if (root->left == NULL && root->right != NULL) {
        Pair rightLL = convertToLL(root->right);
        root->right = rightLL.head;
        Pair ans;
        ans.head = root;
        ans.tail = rightLL.tail;
        return ans;
     } else {
              Pair leftLL =  convertToLL(root->left);
                    Pair rightLL = convertToLL(root->right);
leftLL.tail->right = root;
root->right = rightLL.head;
Pair ans;
ans.head = root;
ans.tail = rightLL.tail;
     }
  }

    public :
    BST() {
        root = NULL;
    }
    ~BST() {
        delete root;
    }

    void deleteData(int data) {

    }
    void insert(int data) {
        root = insert(root, data);
    }

    bool hasData(int data) {
       return hasData(root, data);
    }

    void print() {
            printTree(root);
    }

    void deleteData(int data) {
        root = deleteData(root, data);
    }

    BTNode<int>* convertToLL() {
        Pair p = convertToLL(root);
        BTNode<int>* tmp = p.head;
        while(tmp!=NULL) {
            tmp->left = NULL;
        tmp = tmp->right;
    }
        return p.head;
    }
};


int main() {
    BST b;
    b.insert(10);
    b.insert(5);
    b.insert(50);
    b.insert(40);
    b.insert(30);

    b.print();

    BTNode<int>* head = b.convertToLL();
    BTNode<int>* tmp = head;
    while(tmp!=NULL) {
        cout<<tmp->data<<"->";
        tmp = tmp->right;
    }
    return 0;
}