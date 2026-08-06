//create a class mobile with brand and price using costructor.
#include <iostream>
using namespace std;
class mobile{
    public:
    string brand;
    int price;
    mobile(string b,int p){
        brand=b;
        price=p;
        
        cout<<"Brand: "<<brand<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
int main(){
    mobile m1("vivo",30000);
    return 0;
}