// create a class rectangle to calculate area.
#include <iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int width;
    int area;
    Rectangle(){
        length=10;
        width=15;
        area=length*width;
        cout<<"Area of rectangle = "<<area<<endl;
    }
};
int main(){
    Rectangle r1;
    return 0;
}