//Write a C++ program to define a class Calculator with overloaded member functions multiply() to multiply:
//• Two integers
//• Three integers
//• Two floating-point numbers
#include <iostream>
using namespace std;
class Calculator{
    public:
    void multiply(int a,int b){
        cout<<"Multiplication of two num: "<<a*b<<endl;
    }
    void multiply(int x,int y,int z){
        cout<<"Multiplication of three num: "<<x*y*z<<endl;
    }
    void multiply(double f,double g){
        cout<<"Multiplication of two floating point num: "<<f*g<<endl;
    }
};
int main(){
    Calculator c1;
    c1.multiply(5,7);
    c1.multiply(4,5,6);
    c1.multiply(5.8,2.4);
    return 0;
}