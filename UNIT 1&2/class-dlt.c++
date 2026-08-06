#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
};
int main(){
    student s1;
    s1.name="Ansari";
    s1.age=19;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Age: "<<s1.age<<endl;

    delete s1;

    return 0;
}