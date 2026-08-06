//Implement single inheritance using Person and Student classes.
#include <iostream>
using namespace std;
class Person{
    public:
    string name="Ansari";
    int age=19;
    void displayPerson(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class Student:public Person{
    public:
    int roll_no=01;
    void displayStudent(){
        cout<<"Roll no: "<<roll_no<<endl;
    }
};
int main(){
    Student s1;
    s1.displayPerson();
    s1.displayStudent();
    return 0;
}