// Data abstraction used hide data to show.
//Data abstraction is a concept of OOp in which only the essential information is shown to the user and the unnecessary details are hidden.
//In simple words, Data Abstraction means hiding the internal implementation and showing only important features of the program.
#include <iostream>
using namespace std;
class Car{
    private:
    int speed;

    public:
    void setspeed(int s){
        speed=s;
    }
    void showspeed(){
        cout<<"Speed : "<<speed<<endl;
    }
};
int main(){
    Car c1;
    c1.setspeed(69);
    c1.showspeed();
}

// M imp for internal exam.