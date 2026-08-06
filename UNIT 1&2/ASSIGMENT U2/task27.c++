// print message when object is created and destroyed. 
#include <iostream>
using namespace std;
class Demo{
    public:
    Demo(){
        cout<<"Object is created!"<<endl;
    }
    ~Demo(){
        cout<<"Object destroyed!"<<endl;
    }
};
int main(){
    Demo d1;
    return 0;
}