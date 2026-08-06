// Create a class Book and print book details.
#include <iostream>
using namespace std;
class book{
    public:
    string name;
    int price;
    book(){
        name="c++";
        price=500;
        cout<<"Name: "<<name<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
int main(){
    book b1;
    return 0;
}