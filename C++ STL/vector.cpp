#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> v) {
    for(int i = 0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main() {
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i< n; i++) {
        int x; 
        cin >> x;
        v.push_back(x);
    }
    printVector(v);

    vector<int> v2 = v ; // we can directly copy vector which is not possible in array

    // Nested Vector

    // vector of pair
    vector<pair<int,int>> v3 = {{1,2}, {2,3}, {3,4}};
    
    vector<pair<int, int>> v4;
    int s; // size
    cin>> s;
    for(int i =0; i< s; i++) {
        int x, y;
        cin>>x>>y;
        v4.push_back({x, y});
    }
     printVector(v);

     // array of vectors
     int N; // no. of vectors in vector's array
     cin >> N;
     vector<int> v5[N];
     for(int i=0; i<N; i++) {
        int n; // size of vector 
        cin>>n;
        for(int j = 0; j<n; j++) {
            int x;
            cin>>x; 
            v5[i].push_back(x);
        }
     }
     for(int i=0; i< N; i++) {
        printVector(v5[i]);
     }

     // vecotr of vector
      int N1; 
      cin >> N1;
      vector<vector<int>>v6;
      for(int i=0; i< N; i++) {
        int n; 
        cin>>n;
        vector<int> temp;
        for(int j=0; j<n; j++) {
            int x; 
            cin>>x;
            temp.push_back(x);
        }
        v6.push_back(temp);
      }
      for(int i=0; i< v6.size(); i++) {
            printVector(v6[i]);
        }
}