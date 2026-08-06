//Write a program using a friend function.
#include <iostream>
using namespace std;
class Number{
    private:
    int num=10;
    public:
    friend void show(Number n);
};
void show(Number n){
    cout<<"Number = "<<n.num;
}
int main(){
    Number obj;
    show(obj);
    return 0;
}