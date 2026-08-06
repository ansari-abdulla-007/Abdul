// create a class account with deposit and withdraw methods.
#include <iostream>
using namespace std;
class account{
    public:
    int balance=0;
    void deposit(int amount){
        balance=balance+amount;
        cout<<"Deposit: "<<balance<<endl;
    }
    void withdraw(int amount){
        balance=balance-amount;
        cout<<"Withdraw: "<<balance<<endl;
    }
};
int main(){
    account a;
    a.deposit(1000);
    a.withdraw(500);

    return 0;

}