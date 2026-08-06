// Create classes Singer and Dancer with method perform().
#include <iostream>
using namespace std;
class singer{
    public:
    void perform(){
        cout<<"Singer singing song!"<<endl;
    }
};
class dancer{
    public:
    void perform(){
        cout<<"Dancer performs dancing steps!"<<endl;
    }
};
int main(){
    singer s;
    dancer d;
    s.perform();
    d.perform();
    return 0;
}