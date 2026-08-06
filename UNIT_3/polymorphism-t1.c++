//Create classes Laptop and Mobile with method power_on().
#include <iostream>
using  namespace std;
class laptop{
    public:
    void power_on(){
        cout<<"Laptop is startig...."<<endl;
    }
};
class mobile{
    public:
    void power_on(){
        cout<<"Mobile is starting...."<<endl;
    }
};
int main(){
    laptop l;
    mobile m;
    l.power_on();
    m.power_on();
    return 0;
}