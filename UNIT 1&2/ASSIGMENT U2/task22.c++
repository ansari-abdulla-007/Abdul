// create a class laptop and display its details.
#include <iostream>
using namespace std;
class laptop{
    public:
    string model;
    int price;
    void showdetails(){
        model="Dell 15";
        price=45000;
        cout<<"Model: "<<model<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
int main(){
    laptop l1;
    l1.showdetails();
    return 0;
}