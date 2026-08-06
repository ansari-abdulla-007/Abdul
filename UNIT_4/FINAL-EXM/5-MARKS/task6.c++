//Write a C++ program to create a class BankAccount with account number, customer name, and balance. Implement deposit, withdrawal, and display operations using member functions.
#include <iostream>
using namespace std;
class BankAccount{
    public:
    int acc_num=25041;
    string cust_name="Abduu";
    int balance=1000;

    void showDeposit(int ammount){
        cout<<"Deposit: "<<balance+ammount<<endl;
    }
    void showWithdrawl(int ammount){
        cout<<"Withdrawl: "<<balance-ammount<<endl;
    }
};
int main(){
    BankAccount b1;
    b1.showDeposit(1000);
    b1.showWithdrawl(500);
    return 0;
}