#include<bits/stdc++.h>
using namespace std;



 vector<int> converAscii(string s) {
    vector<int> v;
     for(int i = 0 ; i<s.size(); i++) {
        v.push_back((int)s[i]);
        // v.at(i) = (int)s[i];
     }
     return v;
 }

 string reverse(string s) {
 int st = 0;
    int e = s.size() - 1;
   while(st<=e) {
       swap(s[st], s[e]);
       st++;
       e--;
   }
   return s;
 }

string funnyString(string s) {
    string original = s;
   
    string rev = reverse(s);
    
  vector<int> snum =   converAscii(rev);
  vector<int> onum =  converAscii(original);
    
    for(int i=0; i<snum.size(); i++) {
        if(abs(snum[i]-onum[i])== abs(snum[i+1] - onum[i+1])){
            return "Funny";
        } else {
            return "Not Funny";
        }
          
        
    }
    
  return "NOT Funny";
}
 
 int main() {
     string s = "lmnop";
string reverses = reverse(s);
    vector<int> v= converAscii(s);
    vector<int> r = converAscii(reverses);
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
     for(int i=0; i<v.size(); i++) {
        cout<<r[i]<<" ";
    }
cout<<endl;
    vector<int> d;
     for(int i=0; i<v.size(); i++) {
        d.push_back(abs(v[i] - r[i]));
       
    }
    cout<<endl;
     for(int i=0; i<d.size(); i++) {
       
        cout<<d[i]<<" ";
    }
cout<<endl;
  cout<<funnyString(s);
     
     
     return 0;
     }