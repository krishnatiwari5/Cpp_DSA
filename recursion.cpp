#include<bits/stdc++.h>
using namespace std;

// first problem is Fibonacci Series

int Fibonacci(int n) {
if(n<2) {
    return n;
}

 return  Fibonacci(n-1) + Fibonacci(n-2);

}


// second problem find power of a number

int power(int num, int pow) {
    if(pow == 0) {
        return 1;
    } 

    return num * power(num, pow-1);
}


// third problem print first n numbers

void printNum(int n) {
    if(n==0) {
        return;
    }

    printNum(n-1);
    cout<<n<<endl;
}


// fourth problem count No. of digits in given Number

int countDigit(int num) {
    if(num==0) {
       
       return 0;
    }
  

   return countDigit(num/10) + 1;

 
}



// fifth problem Sum of digits of a given number

int sumOfDigit(int num) {
    if(num == 0) {
        return 0;
    }

    return sumOfDigit(num/10) + num%10;
}

// sixth problem Multiply two numbers using addition operator


int multiply(int m, int n) {
    if(n==0) {
        return 0;
    } 

    return (m + multiply(m, n-1));
}

// seventh problem count zeros in given number

int countZeros(int num) {
    if(num==0) {
        return 0;
    }
if(num%10 == 0) {
        return countZeros(num/10) + 1;
    }
   

    return countZeros(num/10);
 
}

// eighth problem geometric series sum

int geometricSum(int num , int k) {
    if(k==0) {
        return 1;
    } 
    
    return (pow(num, k) + geometricSum(num, k-1));
}


// ninth problem check wheather array is sorted or not

bool checkArraySorted(int a[], int n) {
    if(n==0 || n==1) {
        return true;
    } 

    if(a[0] > a[1]) {
        return false;
    }

    return checkArraySorted(a+1, n-1);
}


// Tenth problem Sum of Array

int sumOfArray(int a[], int n) {
    if(n==0) {
        return 0;
    }
     
     return a[n-1] + sumOfArray(a, n-1);
}


// eleventh problem check if element present in Array or not

bool presentInArray(int a[], int n,  int x) {
    if(n==0) {
        return false;
    }

    //we can also solve this question using iterator i
// if(a[i] == x) {
//     return true;
// }

if(a[n-1] == x) {
    return true;
}

return presentInArray(a, n-1, x);

}


// twelveth problem find First Index of Element 

int giveIndex(int a[], int n , int i, int x)  {
    if(i==n) {
        return -1;
    }

    if(a[i] == x) {
        return i;
    }

    return giveIndex(a, n, i+1, x);
}

//thirteen problem find Last Index of Element 

int giveIndexL(int a[], int n, int i, int x){
if(i==-1) {
        return -1;
    }

    if(a[i] == x) {
        return i;
    }

    return giveIndex(a, n, i-1, x);
}

// fourteen problem print all position of element

void printIndex(int a[], int n, int x) {
    if(n==0) {
        return ;
    }

if(a[n-1] == x) {
    cout<<(n-1)<<" "<<endl;
}

printIndex(a, n-1, x);

}

// fifteen problem Count the occurence of element

int countOccurence(int a[], int n, int x, int ans = 0) {
    if(n==0) {
        return ans;
    }

if(a[n-1] == x) {
    ans++;
}
 return countOccurence(a, n-1, x, ans);
}


//sixteen problem Store all the position of element

// vector is passing by reference , Smost important point of this question remember it
void saveAllPos(int a[], int n,int i, int x, vector<int> &v) {
    if(i==n) {
        return;
    }
    if(a[i] == x) {
        v.push_back(i);
    }

    saveAllPos(a, n, i+1, x, v);
}


int saveAllPosUsingArray(int a[], int n, int i, int x, int output[], int j) {
    if(i==n) {
        return -1;
    }
    if(a[i] == x) {
        output[j] = i;
       return 1 + saveAllPosUsingArray(a,n, i+1, x, output, j+1);
    }
   return  saveAllPosUsingArray(a, n, i+1, x, output, j);
}


// seventeen problem check Palindrome

bool checkPalindrome(int a[], int s, int e) {
    if(s>e) {
        return true;
    } 

    if(a[s]==a[e]) {
        return checkPalindrome(a, s+1, e-1);
    } else {
        return false;
    }

}


// eighteen problem print and reverse print chart array

void printChar(char b[]) {
    if(b[0] == '\0') {
        return;
    }

cout<<b[0];
printChar(b+1);


}

void printCharReverse(char b[]) {
    if(b[0] == '\0') {
        return;
    }
    printCharReverse(b+1);
    cout<<b[0];
}

// nineteen problem find the length of char array

int lengthChar(char b[]) {
    if(b[0] == '\0') {
        return 0;
    }

    return 1 + lengthChar(b+1); // Most Imp Step
}

//twenty problem Replace the char in char array

void repalceChar(char b[], char a, char x) {
    if(b[0] == '\0'){
        return;
    }
    if(b[0]== a) {
        b[0] = x;
    }
    repalceChar(b+1, a, x);
}



// twentyone problem remove character in char array

void removeChar(char b[], char x) {
   if(b[0] == '\0') {
    return;
   } 
   if(b[0]==x){
   for(int i=0; b[i] != '\0'; i++) {
    b[i] = b[i+1];
   }
    removeChar(b, x);
   }
   removeChar(b+1,x);
}

// twenty-two problem remove consecutive Duplicate char in char array

void removeCharCons(char b[], char x) {
   if(b[0] == '\0') {
    return;
   } 
   if(b[0]==x && b[1] == x){
   for(int i=0; b[i] != '\0'; i++) {
    b[i] = b[i+1];
   
   }
    removeCharCons(b, x);
   }
   removeCharCons(b+1,x);
}


// twenty-three problem print all subsequences of string

void printAllSub(string input, string output) {
    if(input.length() == 0) {
        cout<<output<<endl;
        return;
    }
    printAllSub(input.substr(1), output); // excluding
    printAllSub(input.substr(1) ,  output +input[0]); // including
}

// twenty-four problem store all subsequences of string

void storeAllSubs(string input, vector<string> &output) {
    if(input.length() == 0) {
        output.push_back(input);
        return;
    }
  storeAllSubs(input.substr(1), output);
  output.push_back(input);
//   storeAllSubs(input.substr(1), output.push_back(input[0]));

}

// twenty-fifth problem Convert string to integer

int strToInt(char in[],int n) {
    if(n == 0) {
        return 0;
    }

int lastdigit = in[n-1] - '0';
int smallAns = strToInt(in,n-1);


return smallAns*10 + lastdigit;

}

// twenty-six problem print All permutation of String

void printAllperm(char s[], int i) {
    if(s[0]== '\0') {
        cout<<s;
        return;
    }
swap(s[i], s[i+1]);
printAllperm(s+1, i+1);
swap(s[i], s[i+1]);

}


int main() {
//    cout<<Fibonacci(4)<<endl;

// cout<<power(5,3)<<endl;

// printNum(5);
// cout<<sumOfDigit(12345);

// cout<<multiply(5, 3);

// cout<<countZeros(100006060);

// cout<<geometricSum(2, 3);


int a[] = {4, 4, 0, 0, 4, 4};

// if(checkArraySorted(a, 6)) {
//     cout<<"Array is Sorted "<<endl;
// } else {
//     cout<<"Array is Not Sorted"<<endl;
// }


// cout<<sumOfArray(a, 6);

// if(presentInArray(a, 6,  51)){
//     cout<<"Element is present in Array "<<endl;
// } else {
//     cout<<"Element is not present in Array"<<endl;
// }


// cout<<giveIndexL(a, 6, 5, 1);

// printIndex(a, 6, 1);


// cout<<countOccurence(a,6,1,0);
// vector<int> v;
// saveAllPos(a,6, 0, 1, v);
// for(int i=0;i<v.size();i++) {
//     cout<<v[i]<<"  ";
// }

// int output[6];
// int count = saveAllPosUsingArray(a, 6, 0,4 , output, 0);
// for(int i=0; i<=count; i++) {
//     cout<<output[i]<<"  ";
// }

// cout<<checkPalindrome(a, 0, 5);
// 0 means false , non - zero(1) means true


// char b[] = "Kriiiishiiiinaiiii";
// printChar(b);
// cout<<endl;
// printCharReverse(b);


// int length = lengthChar(b);
// cout<<length;


// repalceChar(b, 'i', 'j');
// cout<<b;

// removeChar(b, 'i');
// cout<<b;

// removeCharCons(b, 'i');
// cout<<b;

string input = "abc";
string output = "";

printAllSub(input, output);

// string input = "abc";
// vector<string> output;

// storeAllSubs(input, output);

// for(int i=0; i<output.size(); i++) {
//     cout<<output[i]<<endl;
// }

// char in[] = "12345";
// int n = strlen(in);

// cout<<strToInt(in, n );

// char s[] = "ABC";
// printAllperm(s, 0);

    return 0;


}