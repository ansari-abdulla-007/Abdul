//Write a program demonstrating operator overloading.
#include <iostream>
using namespace std;
class Calculate{
    public:
    void add(int a,int b){
        cout<<"Addition: "<<a+b<<endl;
    }
    void add(int x,int y,int z){
        cout<<"Addition: "<<x+y<<endl;
    }
};
int main(){
    Calculate c1;
    c1.add(10,20);
    c1.add(30,40,50);
    return 0;
}