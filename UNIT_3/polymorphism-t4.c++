// Create classes Pen and Pencil with method write().
#include <iostream>
using namespace std;
class pen{
    public:
    void write(){
        cout<<"Writting with pen"<<endl;
    }
};
class pencil{
    public:
    void write(){
        cout<<"Writting with pencil"<<endl;
    }
};
int main(){
    pen p1;
    pencil p2;
    p1.write();
    p2.write();
    return 0;
}