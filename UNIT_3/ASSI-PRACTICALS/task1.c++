//Write a C++ program to demonstrate method overloading using addition of numbers.
#include <iostream>
using namespace std;
class Addition{
    public:
    void add(int a,int b){
        cout<<"Sum of two numbers: "<<a+b<<endl;
    }
     void add(int x,int y,int z){
        cout<<"Sum of three numbers: "<<x+y+z<<endl;
     }
};
int main(){
    Addition a1;
    a1.add(10,20);
    a1.add(10,20,30);
    return 0;
}