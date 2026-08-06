//Write a C++ program to create a class Person, derive a class Student from it, and derive a class Result from Student. Accept and display student information and result using member functions.
#include <iostream>
using namespace std;
class Person{
    public:
    string name="Abdulla";
    void showPerson(){
        cout<<"Person's name: "<<name<<endl;
    }
};
class Student:public Person{
    public:
    string department="GICSA";
    int enroll_no=01;
    void showStudent(){
        cout<<"Student's department: "<<department<<endl;
        cout<<"Student's enrollment no: "<<enroll_no<<endl;
    }
};
class Result:public Student{
    public:
    string result="Pass";
    void showResult(){
        cout<<"Result : "<<result<<endl;
    }
};
int main(){
    Result r1;
    r1.showPerson();
    r1.showStudent();
    r1.showResult();
    return 0;
}