//Create a class BankAccount with deposit and withdrawal functions.
#include <iostream>
using namespace std;
class BankAccount{
    public:
    int balance=0;
    void deposit(int ammount){
        balance=balance+ammount;
        cout<<"Deposit: "<<balance<<endl;
    }
    void withdraw(int ammount){
        balance=balance-ammount;
        cout<<"Withdraw: "<<balance<<endl;
    }
};
int main(){
    BankAccount b1;
    b1.deposit(1000);
    b1.withdraw(500);
    return 0;
}