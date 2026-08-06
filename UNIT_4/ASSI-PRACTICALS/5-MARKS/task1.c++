//Create a class Student with data members and display student details.
#include <iostream>
using namespace std;
class Student{
    public:
    int marks=89;
    int roll_no=1;
    void display(){
        cout<<"Marks: "<<marks<<endl;
        cout<<"Roll No: "<<roll_no<<endl;
    }
};
int main(){
    Student s1;
    s1.display();
    return 0;
}