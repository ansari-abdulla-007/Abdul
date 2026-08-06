// Polymorphism means one function can behave different ways.
//-> Polymorphism means one name,many forms.
//-> It allows the same function or operator to behave differently in different situations.
//->A single action can perform different tasks depending on the object.
#include <iostream>
using namespace std;
class Demo{
    public:
    void show(){
        cout<<"No argument!"<<endl;
    }
    void show(int a){
        cout<<"NUmber: "<<a<<endl;
    }
};
int main(){
    Demo d;
    d.show();
    d.show(10);
    return 0;
}