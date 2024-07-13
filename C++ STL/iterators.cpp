#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {2,3,5,6,7};
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int> :: iterator it = v.begin();
    // cout<< (*(it)) << endl;
    for(it = v.begin(); it!= v.end(); it++) {
        cout<< (*it) <<endl;
    }
  //  it++ = next iterator
  // it+1 = next location

  // iterator in pair of vectors
  vector<pair<int, int>> v_p = {{1,2}, {2,3}, {3,4}};
  vector<pair<int,int>> :: iterator it1;
  for(it1 = v_p.begin() ; it1!= v_p.end(); it1++) {
    cout<<(*it1).first << " " << (*it1).second <<endl;
   // above statement is same as cout<<it1->first << " " << it1->second <<endl;
  }

  // Auto and Range based loops

// range based loop
  for(int value : v) {
    cout<< value <<" ";
  }
  cout<<endl;
  // above code also written as
  for(auto value : v) {
    cout<< value <<" ";
  }
  cout<<endl;

  // auto keyword

  // auto keyword determined data type of variable automatically

  for( auto it2 = v.begin(); it2 != v.end() ; it2++) {
    cout<< (*it2) << " ";
  }
    return 0;
}
