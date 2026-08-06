//Write a C++ program to create two base classes Academic and Sports. Derive a class Student from both classes and display academic and sports scores using member functions.
#include <iostream>
using namespace std;
class Academic{
    public:
    void showAcademic(){
        cout<<"Academic score : A++!"<<endl;
    }
};
class Sports{
    public:
    void showSports(){
        cout<<"Sports score : B++!"<<endl;
    }
};
class Student:public Academic,public Sports{
    public:
    void showStudent(){
        cout<<"Student name : Abduu!"<<endl;
    }
};
int main(){
    Student s1;
    s1.showStudent();
    s1.showAcademic();
    s1.showSports();
    return 0;
}