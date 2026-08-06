//Implement multilevel inheritance.
#include <iostream>
using namespace std;
class A{
    public:
    void showA(){
        cout<<"This is a class A!"<<endl;
    }
};
class B:public A{
    public:
    void showB(){
        cout<<"This is a class B!"<<endl;
    }
};
class C:public B{
    public:
    void showC(){
        cout<<"This is a class C!"<<endl;
    }
};
int main(){
    C c1;
    c1.showA();
    c1.showB();
    c1.showC();
    return 0;
}