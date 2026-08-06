#include <iostream>
using namespace std;
class student{
    public:
    int age;
    string name;
    void show(){
        age=19;
        name="Abduu";
        cout<<"Age: "<<age<<endl;
        cout<<"Name: "<<name<<endl;
    }
};
int main(){
    student s1;
    s1.show();
    return 0;
}