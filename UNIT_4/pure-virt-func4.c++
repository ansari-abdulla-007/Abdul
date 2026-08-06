//Cricle=pie*r*r
#include <iostream>
using namespace std;
class Shape{
    public:
    virtual void area()=0;
};
class Circle:public Shape{
    public:
    void area(){
        float r=5;
        cout<<"Area of circle: "<<3.14*r*r<<endl;
    }
};
int main(){
    Circle c1;
    c1.area();
    return 0;
}