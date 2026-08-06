// create a class circle to calculate area.
#include <iostream>
using namespace std;
class circle{
    public:
    int radius;
    circle(int r){
        radius=r;
        cout<<"Are of circle: "<<3.14*radius*radius<<endl;
    }
};
int main(){
    circle c1(5);
    return 0;
}