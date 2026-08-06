// create a class vehicle and call methods using object.
#include <iostream>
using namespace std;
class vehicle{
    public:
    void start(){
        cout<<"Vehicle start"<<endl;
    }
    void stop(){
        cout<<"Vehicle stop"<<endl;
    }
};
int main(){
    vehicle v1;
    v1.start();
    v1.stop();
    return 0;
}