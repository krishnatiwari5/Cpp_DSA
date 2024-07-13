#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> removeDuplicates(int* arr, int n) {
 vector<int> output;
    unordered_map<int, bool> mymap;

    for(int i=0; i<n; i++) {
        if(mymap.count(arr[i]) == 0) {
            output.push_back(arr[i]);
            mymap[arr[i]] = true;
        }
    }
    return output;
}

int main() {
   
   int arr[] = {1,5,2,4,4,3,3,6,7,1,1,2} ;
   vector<int> output = removeDuplicates(arr,12);
   for(int i=0; i<output.size(); i++) {
    cout<<output[i]<<" "<<endl;
   } 

    return 0;
}