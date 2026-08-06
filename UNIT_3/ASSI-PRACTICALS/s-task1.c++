// write a C++ program for a overloading .
#include <iostream>
using namespace std;
class Addition{
    public:
    void add(int a,int b){
        cout<<"Addition of two num = "<<a+b<<endl;
    }
    void add(int x,int y,int z){
        cout<<"Addition of three num = "<<x+y+z<<endl;
    }
};
int main(){
    Addition a1;
    a1.add(10,10);
    a1.add(10,20,30);
    return 0;
}