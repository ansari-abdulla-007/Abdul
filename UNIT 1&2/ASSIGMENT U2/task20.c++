//create a class square to print square of number>
#include <iostream>
using namespace std;
class square{
    public:
    int a;
    square(int x){
        a=x;
        cout<<"Sqaure : "<<a*a<<endl;
    }
};
int main(){
    square s1(5);
    return 0;
}