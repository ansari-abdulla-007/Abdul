//Create class A, derive B, then derive C. Display all messages.
#include <iostream>
using namespace std;
class A{
    public:
    void showA(){
        cout<<"Class A"<<endl;
    }
};
class B:public A{
    public:
    void showB(){
        cout<<"Class A"<<endl;
    }
};
class C:public B{
    public:
    void showC(){
        cout<<"Class B"<<endl;
    }
};
int main(){
    C c1;
    c1.showA();
    c1.showB();
    c1.showC();
    return 0;
}