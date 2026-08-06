//Write a C++ program to define a class Area with overloaded member functions calculateArea() to find the area of:
//• A square
//• A rectangle
//• A circle.
#include <iostream>
using namespace std;
class  Area{
    public:
    void calculateArea(int side){
        cout<<"Area of square: "<<side*side<<endl;
    }
    void calculateArea(int length,int breadth){
        cout<<"Area of rectangle: "<<length*breadth<<endl;
    }
    void calculateArea(double radius){
        cout<<"Area of circle: "<<3.14*radius*radius<<endl;
    }
};
int main(){
    Area a;
    a.calculateArea(4);
    a.calculateArea(4,6);
    a.calculateArea(3.0);
    return 0;
}