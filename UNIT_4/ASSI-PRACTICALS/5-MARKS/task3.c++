//Create a class Rectangle and calculate area and perimeter.
#include <iostream>
using namespace std;
class Rectangle{
    public:
    int length=10;
    int width=5;
    void area(){
        cout<<"Area of rectangle: "<<length*width<<endl;
    }
};
int main(){
    Rectangle r1;
    r1.area();
    return 0;
}