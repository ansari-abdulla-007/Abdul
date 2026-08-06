#include <iostream>
using namespace std;
class A{
    public:
    void showA(){
        cout<<"This is a class A"<<endl;
    }
};
class B{
    public:
    void showB(){
        cout<<"This is a class B"<<endl;
    }
};
int main(){
    A *a=new A();
    B b;
    a->showA();
    b.showB();

    cout<<"Object A is deleted";
    return 0;
}