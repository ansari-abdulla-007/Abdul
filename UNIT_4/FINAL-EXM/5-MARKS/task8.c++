//Write a C++ program to define a class Employee with Employee ID, Name, and Salary. Accept and display employee information using member functions.
#include <iostream>
using namespace std;
class Employee{
    public:
    int employee_id;
    string name;
    int salary;

    void setValue(){
        employee_id=1;
        name="Abduu";
        salary=10000;
    }
    void showDetails(){
        cout<<"Employee id: "<<employee_id<<endl;
        cout<<"Employee name: "<<name<<endl;
        cout<<"Employee salary: "<<salary<<endl;
    }
};
int main(){
    Employee e1;
    e1.setValue();
    e1.showDetails();
    return 0;
}