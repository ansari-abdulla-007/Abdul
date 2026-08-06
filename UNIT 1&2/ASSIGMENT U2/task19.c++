// create a class number to check even or add.
#include <iostream>
using namespace std;
class check{
    public:
    int n;
    check(int x){
        n=x;
        if(n%2==0){
            cout<<"Even number!";
        } else{
            cout<<"Odd number!";
        }
    }
};
int main(){
    check c1(7);
    return 0;
}