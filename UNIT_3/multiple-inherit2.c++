//Create two base classes Father and Mother, derive child class.
#include <iostream>
using namespace std;
class Father{
    public:
    void money(){
        cout<<"Father gives money!"<<endl;
    } 
};
class Mother{
    public:
    void care(){
        cout<<"Mother gives care!"<<endl;
    }
};
class Child:public Father,public Mother{

};
int main(){
    Child c1;
    c1.money();
    c1.care();
    return 0;
}