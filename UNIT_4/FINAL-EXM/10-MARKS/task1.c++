//Write a C++ program to define a class Temperature with a private data member celsius. Create public member functions setTemperature() and displayFahrenheit() to accept temperature in Celsius and display it in Fahrenheit.
#include <iostream>
using namespace std;
class Temprerature{
    private:
    int celsius;
    public:
    void setTemperature(int c){
        celsius=c;
    }
    void displayFahrenheit(){
        float fahrenheit;
        fahrenheit=(celsius *9/5)+32;
        cout<<"Temprature in fahrenheit : "<<fahrenheit<<endl;
    }
};
int main(){
    Temprerature t1;
    t1.setTemperature(42);
    t1.displayFahrenheit();
    return 0;
}