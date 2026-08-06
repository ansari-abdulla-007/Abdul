//Write a C++ program to implement method overloading for calculating area of different shapes.
#include <iostream>
using namespace std;
class Area{
    public:
    void calculateArea(int side){
        cout<<"Area of square = "<<side*side<<endl;
    }
    void calculateArea(int length,int width){
        cout<<"Area of square = "<<length*width<<endl;
    }
};
int main(){
    Area a;
    a.calculateArea(4);
    a.calculateArea(4,8);
    return 0;
}