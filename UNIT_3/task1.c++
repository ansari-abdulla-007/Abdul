#include <iostream>
using namespace std;
class student{
    public:
    void show(){
        cout<<"Hello student!"<<endl;
    }
};
int main(){
    student s1;
    s1.show();
    return 0;
}