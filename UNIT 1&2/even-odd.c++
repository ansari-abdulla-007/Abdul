#include <iostream>
using namespace std;
class number{
    public:
    int num=7;
    void checkEveOdd(){
        if(num%2==0){
            cout<<"number is even!";
        }
        else{
            cout<<"numbber is odd!";
        }
    }
};
int main(){
    number n1;
    n1.checkEveOdd();
    return 0;
}