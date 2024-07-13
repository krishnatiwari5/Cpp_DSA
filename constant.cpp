//in this proggame we are going to leran a imp concept of constant variable
#include<iostream>
using namespace std;
int main(){
    int i=8;
    int &j=i;// --> eq.1
    j++; // j has access to change the value of i.
    cout<<i<<" and "<<j<<endl;
    int a=5;
    int const &b=a;// --> eq.2
    // b++; --> if we right this we get an error because b cannot change the value . b is constant variable
    /* we can see that eq1 and eq2 are similar but difference in a word 'const'.
    which is very important because by using word constant we can copy the data of a
    into b but we cannot change it
    but in eq1 we can copy also and we can change it also. which sometimes creat a problem
*/
    return 0;
}