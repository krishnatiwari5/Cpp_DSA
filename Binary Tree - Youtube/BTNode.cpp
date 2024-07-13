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