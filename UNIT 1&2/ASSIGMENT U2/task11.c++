//create a class bankaccount with private variable balance.
#include <iostream>
using namespace std;
class Bankaccount{
    private:
    int balance;
    public:
    Bankaccount(int b){
        balance=b;
        cout<<"Balance: "<<balance;
    }
};
int main(){
    Bankaccount b1(40000);
    
}