// this is same has dynamic array but we have two advatange of vector over array
// 1 is in vector we dont need to enter the size
// 2 in vector we can insert as much as we can because vector doubles it size everytime
// syntax for creating vector is :- vector<data-type> name; --> this is static way
// syntax for creating vector is :- vector<data-type> *name= new vector<data-type>();--> dynamic way
#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v;
v.push_back(20);// push_back function is used to insert the elment at last
v.push_back(50);
v.push_back(47);
cout<<v[0]<<endl;
cout<<v[1]<<endl;
v[2]=85;
cout<<v[2]<<endl;
v.push_back(12);
v.push_back(47);
v.push_back(45);
v.push_back(10);
// to insert an element we cannot use [] we must have to use push_back function
// at function is safer than []
cout<<v.at(0)<<endl;
cout<<v.at(1)<<endl;
cout<<v.at(3)<<endl;

v.pop_back();// pop_back function used to remove last element of vector 
// we have a function called capacity function it is different from size fuction
// size function tell us basicly the size means how much elements are present in array
// capacity fuction tell us how much element we can insert (possibilty)
for(int i=0;i<v.size();i++){
    cout<<"capacity is :- "<<v.capacity()<<"   "<<"size is :- "<<v.size()<<endl;
cout<<v[i]<<"  ";

}

cout<<endl;

vector<int> a;
for(int j=0;j<50;j++){
    cout<<"capacity is :- "<<a.capacity()<<"   size is :- "<<a.size()<<endl;
    a.push_back(j);
    cout<<a[j]<<endl;
}
    return 0;
}