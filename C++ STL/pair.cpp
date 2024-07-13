#include<bits/stdc++.h>
using namespace std;

int main() {
    // Pairs
    pair<int, string> p;
    pair<int, string> p1;
    // inisilization of pair
    p = make_pair(1, "Krishna"); 
    p1 = {2, "Tiwari"};
    cout<<p.first<<" "<<p.second<<endl;
    // pair array
    pair<int,int> p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};
    swap(p_array[0], p_array[2]);
    for(int i=0; i<3; i++) {
        cout<<p_array[i].first << " " <<p_array[i].second<<endl;
    }
    return 0;
}