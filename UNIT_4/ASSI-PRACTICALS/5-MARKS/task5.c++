//Write a program demonstrating function overloading.
#include <iostream>
using namespace std;
class Student{
    public:
    void add(int a,int b){
        cout<<"Addition of two num: "<<a+b<<endl;
    }
    void add(int x,int y,int z){
        cout<<"Addition of three num: "<<x+y+z<<endl;
    }
};
int main(){
    Student s1;
    s1.add(10,20);
    s1.add(10,20,30);
    return 0;
}