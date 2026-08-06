//Write a program demonstrating constructor overloading.
#include <iostream>
using namespace std;
class Student{
    public:
    int marks;
    Student(){
        cout<<"Defualt constructor called!"<<endl;
    }
    Student(int m){
        marks=m;
        cout<<"Marks :"<<marks<<endl;
    }
};
int main(){
    Student s1;
    Student s2(87);
    return 0;
}