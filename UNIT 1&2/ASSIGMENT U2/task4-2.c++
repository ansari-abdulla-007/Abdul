// Create a class Book and print book details(with constructor).
#include <iostream>
using namespace std;
class Book{
    public:
    Book(){
        cout<<"Title : c++ oops"<<endl;
        cout<<"Auothor : Bjarne stroustrap"<<endl;
        cout<<"Price : 500"<<endl;
    }
};
int main(){
    Book b1;
    return 0;
}