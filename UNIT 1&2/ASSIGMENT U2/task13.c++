// create a class student with private data and access it using methods.
#include <iostream>
using namespace std;
class student{
    private:
    string name;
    int id;
    public:
    void setdata(){
        name="Abdulla";
        id=01;
    }
    void showdata(){
        cout<<"Name: "<<name<<endl;
        cout<<"Id: "<<id<<endl;
    }
};
int main(){
    student s1;
    s1.setdata();
    s1.showdata();
    return 0;
}