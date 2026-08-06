//Write a C++ program using an abstract class Shape containing a pure virtual function area(). Derive classes Circle and Rectangle and calculate their areas using member functions.
#include <iostream>
using namespace std;
class Shape{
    virtual void area()=0;
};
class Circle:public Shape{
    public:
    double radius=5.8;
    void area(){
        cout<<"Area of circle: "<<3.14*radius*radius<<endl;
    }
};
class Rectangle:public Circle{
    public:
    int l=5;
    int w=7;
    void area(){
        cout<<"Area of rectangle: "<<l*w<<endl;
    }
};
int main(){
    Rectangle r1;
    Circle c1;
    r1.area();
    c1.area();
    return 0;
}
