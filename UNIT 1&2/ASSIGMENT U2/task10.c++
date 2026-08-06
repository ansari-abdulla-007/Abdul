// write a program to demonstrate default constructor.
#include <iostream>
using namespace std;
class car{
    public:
    string name;
    car(){
        name="BMW";
        cout<<"Name: "<<name<<endl;
    }
};
int main(){
    car c1;
    return 0;
}