//Write a C++ program to create a base class Vehicle with a virtual function showDetails(). Derive classes Car and Bike and override the function to display vehicle information.
#include <iostream>
using namespace std;
class Vehicle{
    public:
    virtual void showDetails()=0;
};
class Car:public Vehicle{
    public:
    void showDetails(){
        cout<<"BMW M4"<<endl;
    }
};
class Bike:public Car{
    public:
    void showDetails(){
        cout<<"Duccati"<<endl;
    }
};
int main(){
    Car c1;
    Bike b1;
    c1.showDetails();
    b1.showDetails();
    return 0;
}