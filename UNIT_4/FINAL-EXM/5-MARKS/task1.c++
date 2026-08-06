//Write a C++ program to create a base class Person containing name and age. Derive a class Student containing roll number and marks. Accept and display all details using member functions.
#include <iostream>
using namespace std;
class Person{
    public:
    string name="Abduu";
    int age=19;
    void showPerson(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
class Student:public Person{
    public:
    int roll_num=01;
    int marks=45;
    void showStudent(){
        cout<<"Roll num : "<<roll_num<<endl;
        cout<<"Marks : "<<marks<<endl;
    }
};
int main(){
    Student s1;
    s1.showPerson();
    s1.showStudent();
    return 0;
}