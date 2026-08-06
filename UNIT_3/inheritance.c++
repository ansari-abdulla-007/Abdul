// Single inheritance : One parent-> one child.
#include <iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"Class A"<<endl;
    }
};
class B: public A{
    public:
    void display(){
        cout<<"Class B"<<endl;
    }
};
int main(){
    B obj;
    obj.show();
    obj.display();
    return 0;
}