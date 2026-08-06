#include <iostream>
using namespace std;
class product{
    private:
    int price;  //hidden data.

    public:
    void setPrice(int p){
        price=p;
    }

    void show(){
        cout<<"Price: "<<price<<endl;
    }
};
int main(){
    product p1;
    p1.setPrice(500);
    p1.show();

    return 0;
}