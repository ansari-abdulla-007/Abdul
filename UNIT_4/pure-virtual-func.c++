//Abstract Class.
#include <iostream>
using namespace std;
class Animal{
    public:
    virtual void sound()=0;
};
class Dog:public Animal{
    public:
    void sound(){
        cout<<"Dog Barks!"<<endl;
    }
};
int main(){
    Dog d1;
    d1.sound();
    return 0;
}