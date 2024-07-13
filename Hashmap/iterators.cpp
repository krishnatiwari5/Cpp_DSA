#include<bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<string, int > mymap;
    mymap["abc"] = 1;
    mymap["abc1"] = 2;
    mymap["abc2"] = 3;
    mymap["abc3"] = 4;
    mymap["abc4"] = 5;
    mymap["abc5"] = 6;

    unordered_map<string, int> :: iterator it;
    for(it = mymap.begin(); it != mymap.end(); it++) {
        cout<<"Key : "<<it->first<<" Value : "<<it->second<<endl;
    }

cout<<endl<<endl;
    map<string, int > mymap2;
    /// maps are sorted on keys not on values

    mymap2["abc"] = 1;
    mymap2["abc1"] = 2;
    mymap2["abc2"] = 3;
    mymap2["abc3"] = 4;
    mymap2["abc4"] = 5;
    mymap2["abc5"] = 6;

   map<string, int> :: iterator it2;
    for(it2 = mymap2.begin(); it2 != mymap2.end(); it2++) {
        cout<<"Key : "<<it2->first<<" Value : "<<it2->second<<endl;
    }

    /// using iterator for findin a element, wheater the element exist or not

    // find function return us a iterator
    if(mymap2.find("abc") == mymap2.end()) {
        cout<<"Not present"<<endl;
    } else {
        cout<<"Present"<<endl;
    }

    return 0; 
}