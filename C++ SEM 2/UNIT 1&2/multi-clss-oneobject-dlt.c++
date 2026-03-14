#include <iostream>
using namespace std;
class A{
    public:
    void showA(){
        cout<<"Class a object!"<<endl;
    }
};
class B{
    public:
    void showB(){
        cout<<"Class b object!"<<endl;
    }
};
int main(){
    A *a=new A();
    B b;
    a->showA();
    b.showB();

    delete a;
    cout<<"Class A object deleted!"<<endl;

    return 0;
}