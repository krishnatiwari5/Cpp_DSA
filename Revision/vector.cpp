#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(41);
    v.push_back(70);
    v.push_back(23);
    v.push_back(12);

    v.pop_back();

   for(int i=0; i<v.size(); i++) {
       cout<<v[i]<<" ";
   }
cout<<endl;
   cout<<"Capacity of vector is "<<v.capacity()<<" , "<<"Size of vector is "<<v.size()<<endl;
    return 0; 
}