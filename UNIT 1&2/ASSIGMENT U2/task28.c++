//use del keyword to delete object.
#include <iostream>
using namespace std;
class Demo{
    public:
    Demo(){
        cout<<"Object created!"<<endl;
    }
    ~Demo(){
        cout<<"Object Destroyed!"<<endl;
    }
};
int main(){
    Demo *d = new Demo();
    delete d;
    return 0;
}