#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int marks;

    void setData(string n,int m){
        name=n;
        marks=m;
    }
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main(){
    student s1;
    s1.setData("Abduu",90);
    s1.show();
    return 0;
}