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
        cout<<"This is a class B!"<<endl;
    }
};
int main(){
    A a; //Object of class A.
    B b; //Object of class B.
    a.showA();
    b.showB();

    return 0;
}