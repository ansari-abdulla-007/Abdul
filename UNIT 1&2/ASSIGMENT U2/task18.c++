// Create a class calcuator for addition and substraction.
#include <iostream>
using namespace std;
class calculator{
    public:
    int addition;
    int substraction;

    calculator(int a,int s){
        addition=a;
        substraction=s;
        cout<<"Addition: "<<addition<<endl;
        cout<<"Substraction: "<<substraction<<endl;
    }
};
int main(){
    calculator c1(5+5,6-1);
    return 0;
}