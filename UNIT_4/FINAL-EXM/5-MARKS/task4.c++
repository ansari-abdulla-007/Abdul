//Write a C++ program to demonstrate data abstraction by creating a class BankAccount with private data members account number and balance. Provide public member functions to deposit, withdraw,and display balance.
#include <iostream>
using namespace std;
class BankAccount{
    private:
    int acc_num=25041;
    int balance = 0;

    public:
    void showDeposit(int ammount){
        cout<<"Deposit: "<<ammount+balance<<endl;
    }
    void showWithdraw(int ammount){
        cout<<"Withdraw: "<<ammount-balance<<endl;
    }
};
int main(){
    BankAccount b1;
    b1.showDeposit(1000);
    b1.showWithdraw(500);
    return 0;
}