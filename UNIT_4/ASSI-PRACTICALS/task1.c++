//Create a program demonstrating multiple inheritance with proper output.
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
class C:public A,public B{
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