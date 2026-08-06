//Create classes Bus and Train with method move().
#include <iostream>
using namespace std;
class Bus{
    public:
    void move(){
        cout<<"Bus is moving..!"<<endl;
    }
};
class Train{
    public:
    void move(){
        cout<<"Train is moving...!"<<endl;
    }
};
int main(){
    Bus b;
    Train t;
    b.move();
    t.move();
    return 0;
}