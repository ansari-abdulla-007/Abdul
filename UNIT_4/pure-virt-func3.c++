#include <iostream>
using namespace std;
class Vehicle{
    public:
    virtual void start()=0;
};
class Car:public Vehicle{
    public:
    void start(){
        cout<<"Car starts!"<<endl;
    }
};
int main(){
    Car c1;
    c1.start();
    return 0;
}