#include <iostream>
using namespace std;
class car{
    public:
    string brand;
    int price;
    // Constructor.
    car(string b, int p){
        brand=b;
        price=p;
    }
    void show(){
        cout<<"Brand: "<<brand<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
int main(){
    car c1("Toyota",4500000);
    c1.show();
    return 0;
}