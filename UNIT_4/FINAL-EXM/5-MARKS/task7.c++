//Write a C++ program to define a class Student with data members Roll Number, Name, and Marks.Read and display student details using member functions.
#include <iostream>
using namespace std;
class Student{
    public:
    int roll_num=1;
    string name="Abduu";
    int marks=45;
    void displayStudent(){
        cout<<"Roll no : "<<roll_num<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Marks : "<<marks<<endl;
    }
};
int main(){
    Student s1;
    s1.displayStudent();
    return 0;
}