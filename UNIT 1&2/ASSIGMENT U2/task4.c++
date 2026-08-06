// Create a class Book and print book details.
#include <iostream>
using namespace std;
class Book{
    public:
    string title;
    string author;
    int price;

    void show(){
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
int main(){
    Book b1;
    b1.title="C++ Oops";
    b1.author="Bjarne Stroustrap";
    b1.price=500;

    b1.show();
    return 0;
}