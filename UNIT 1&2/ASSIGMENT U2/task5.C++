//Create a class animal with method sound().
#include <iostream>
using namespace std;
class Animal{
    public:
    void sound(){
        cout<<"Animals makes sound!";
    }
};
int main(){
    Animal a1;
    a1.sound();
    return 0;
}