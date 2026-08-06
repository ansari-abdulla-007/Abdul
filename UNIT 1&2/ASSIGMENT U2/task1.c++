// Create a class student and display name and marks.
#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int marks;
};
int main(){
    student s1;
    s1.name="Abduu";
    s1.marks=01;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Marks: "<<s1.marks<<endl;

    return 0;
}