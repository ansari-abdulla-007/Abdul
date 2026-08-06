#include <iostream>
using namespace std;
class Bankaccount{
    private:
    int balance=10000;
    public:
    void showbalance(){
        cout<<"Balance: "<<balance;
    }
};
int main(){
    Bankaccount b;
    b.showbalance();
}