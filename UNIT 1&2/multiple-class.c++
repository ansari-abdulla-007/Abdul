#include <iostream>
using namespace std;
class A{
    public:
    void showA(){
        cout<<"This is a class A!"<<endl;
    }
};
class B{
    public:
    void showB(){
        cout<<"This is a class B!";
    }
};
int main(){
    A a1;
    B b2;
    a1.showA();
    b2.showB();

    return 0;
}