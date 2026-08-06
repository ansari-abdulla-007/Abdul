//Create a class calcuator for addition and substraction.
#include <iostream>
using namespace std;
class calculator {
    public:
    int a,b;
    calculator(int x,int y){
        a=x;
        b=y;
        cout<<"Addition: "<<a+b<<endl;
        cout<<"Substraction: "<<a-b<<endl;
    }
};
int main(){
    calculator c2(10,5);
    return 0;
}