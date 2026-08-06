#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    student(){            //Constructor.
        name="Abdulla";
        age=19;
        cout<<name<<endl;
        cout<<age;

    }
};
int main(){
    student s1;
    return 0;
}