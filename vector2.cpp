#include<iostream>
#include<vector>
using namespace std;
int main(){
    // we going to see how we can creat vector with a paticular size
    vector<int> a(10);
    a.push_back(4);
    a.push_back(7);
    a.push_back(78);
    a.push_back(12);
    a.push_back(69);
    a.push_back(13);
    a.pop_back();
    a.pop_back();
    a.push_back(58);
    a.push_back(41);

    // we can also insilize a value to each element
    vector<int> b(10,7);
    // now b vector has a size 10 ( means its has 10 element ) which all has vlaue equal to 7
    // for(int i=0;i<b.size();i++){
    //     cout<<b[i]<<"  ";
    // }
    b.push_back(12);
    //here we can insert one more element because as we discussed before the capacity of vector is double than its size 
    cout<<b.size()<<" "<<b.capacity()<<endl;
// cout<<endl<<endl;
//     for(int j=0;j<a.size();j++){
// cout<<a[j]<<"  ";
//     }

    // another function is sort --> this used to arrange the numbers in ascending order
    
    return 0;
}