#include<iostream>
#include<vector>
using namespace std;

// we can implemente graph using 3 method
/*
1) Edge List
2) Adjacency List
3) Adjacency Matrix
*/

// in this we are implementing graph using Adjacency Matrix

int main() {
    int n,e;
    cin>>n>>e;
// 0 means false
// 1 means true
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    for(int i=1; i<=e; i++) {
        int fv, sv;
        cin>>fv>>sv;
        matrix[fv][sv] = 1;
        matrix[sv][fv] = 1;
    }

    return 0;
}