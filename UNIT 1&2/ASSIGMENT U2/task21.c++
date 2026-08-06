// create multiple objects of a class student.
#include <iostream>
using namespace std;
class students{
    public:
    string name;
};
int main(){
    students s1,s2,s3;
    s1.name="Abduu";
    s2.name="Sahil";
    s3.name="Jimi";
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Name: "<<s2.name<<endl;
    cout<<"Name: "<<s3.name<<endl;

    return 0;

}