#include<iostream>
using namespace std;

void bank() {
    cout<<"*********Main Menu*********"<<endl;
    cout<<"option:-1 Check Balance"<<endl;
    cout<<"option:-2 Deposit"<<endl;
    cout<<"option:-3 Withdraw"<<endl;
}

int main() {
bank();
int option;
cin>>option;
double balance = 1425;
double deposit;
double withdraw;
switch (option)
{
case 1:
  cout<<"Your Balance is "<<balance<<" $ "<<endl;
    break;

case 2:
cout<<"Enter deposit amount"<<endl;
cin>>deposit;
cout<<"Thank you your current Balance is "<<(balance+=deposit)<<endl;

case 3:
cout<<"Enter withdraw amount"<<endl;
cin>>withdraw;
cout<<"Thank you your current Balance is "<<(balance-=withdraw)<<endl;
default:
    break;
}
}
