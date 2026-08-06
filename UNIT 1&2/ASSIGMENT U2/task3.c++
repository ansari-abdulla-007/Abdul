// Create a class person and display age.
#include <iostream>
using namespace std;
class person{
    public:
    int age;
};
int main(){
    person p1;
    p1.age=19;
    cout<<"Age: "<<p1.age;
    return 0;

}