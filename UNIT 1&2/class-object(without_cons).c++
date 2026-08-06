#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int id;
};
int main(){
    student s1;
    s1.name="Abduu";
    s1.id=01;

    cout<<"Name: "<<s1.name<<endl;
    cout<<"ID: "<<s1.id;

    return 0;
}