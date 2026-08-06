// write a multilevel inheritance in employee details.(Class employee store id and name,class salary-calculate salary,class payslip,display final details).
#include <iostream>
using namespace std;
class Employee{
    public:
    int id;
    string name;
};
class Salary:public Employee{
    public:
    int salary;
};
class Payslip:public Salary{
    public:
    void display(){
        cout<<"\nEmployee details"<<endl;
        cout<<"Employee id: "<<id<<endl;
        cout<<"Employee name: "<<name<<endl;
        cout<<"Employee salary: "<<salary<<endl;
    }
};
int main(){
    Payslip p1;
    cout<<"Enter employee id: ";
    cin >> p1.id;
    cout<<"Enter employee name: ";
    cin>>p1.name;
    cout<<"Enter employee salary: ";
    cin>>p1.salary;

    p1.display();

    return 0;
}