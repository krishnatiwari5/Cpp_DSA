#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main() {

    unordered_map<string, int> mymap;
    // / insert
    pair<string, int> p("abc", 1);
    mymap.insert(p);

    mymap["def"] = 2;

    /// find or access
    cout<<mymap["abc"]<<endl;
    cout<<mymap.at("abc")<<endl;

    /// cout<<mymap.at("ghi")<<endl;  /// throw exception
    cout<<mymap["ghi"]<<endl;
    cout<<"Size "<<mymap.size()<<endl;

    /// check presence of a key
    if(mymap.count("ghi") > 0) {
        cout<<"ghi is present";
    } else {
        cout<<"not present"<<endl;
    }

    /// update
    mymap["abc"] = 20;

    /// erase or delete
    // erase function take two inputs key or iterator
    mymap.erase("ghi");

    return 0;
}