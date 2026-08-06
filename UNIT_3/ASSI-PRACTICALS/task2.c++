//Write a C++ program to show single inheritance using a class Person and derived class student.
#include <iostream>
using namespace std;
class Person{
    public:
    int age=21;
    string name="CHULHI";
    void showPerson(){
        cout<<"Person's age: "<<age<<endl;
        cout<<"Person's name: "<<name<<endl;
    }
};
class Student:public Person{
    public:
    int rollNo=1;
    void displayStudent(){
        cout<<"Roll no: "<<rollNo<<endl;
    }
};
int main(){
    Student obj;
    obj.showPerson();
    obj.displayStudent();
    return 0;
}