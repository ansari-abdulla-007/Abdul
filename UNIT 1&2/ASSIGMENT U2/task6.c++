//create a class student using constructor to initialize name and marks.
#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int marks;

    student(string n,int m){
        name=n;
        marks=m;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main(){
    student s1("Abdulla",10);
    return 0;
}