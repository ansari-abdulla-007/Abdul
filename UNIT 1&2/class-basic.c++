#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
};
int main(){
    student s1;
    s1.name="Abduu";
    s1.age=19;
    cout<<"name: "<<s1.name<<endl;
    cout<<"age: "<<s1.age<<endl;

    return 0;

}