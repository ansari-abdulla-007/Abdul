// write multiple inheritance program where class C inherit from class A and B.
#include <iostream>
using namespace std;
class A{
    public:
    void showA(){
        cout<<"Class A!"<<endl;
    }
};
class B{
    public:
    void showB(){
        cout<<"Class B!"<<endl;
    }
};
class C:public A,public B{
    public:
    void showC(){
        cout<<"Class C inherits from A and B!"<<endl;
    }
};
int main(){
    C  obj;
    obj.showA();
    obj.showB();
    obj.showC();
    return 0;
}