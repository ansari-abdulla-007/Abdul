//Create classes fan and AC with method start().
#include <iostream>
using namespace std;
class fan{
    public:
    void start(){
        cout<<"Fan started!"<<endl;
    }
};
class AC{
    public:
    void start(){
        cout<<"AC is started!"<<endl;
    }
};
int main(){
    fan f;
    AC a;
    f.start();
    a.start();
    return 0;
}