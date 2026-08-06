//create a class car and initialize color and model.
#include <iostream>
using namespace std;
class Car{
    public:
    string color;
    string model;
    Car(){
        color="black";
        model="BMW M4";

        cout<<"Color: "<<color<<endl;
        cout<<"Model: "<<model<<endl;
    }
};
int main(){
    Car c1;
    return 0;
}