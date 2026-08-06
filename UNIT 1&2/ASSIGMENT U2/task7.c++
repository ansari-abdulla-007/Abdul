// create a class employee with name and salary using constructor.
#include <iostream>
using namespace std;
class employee{
    public:
    string name;
    int salary;
    employee(string n,int s){
        name=n;
        salary=s;
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main(){
    employee e1("Ansari",20000);
    return 0;

}