// show lifecycle of object(creation of destruction).
#include <iostream>
using namespace std;
class Demo{
    public:
    Demo(){
        cout<<"Object created!"<<endl;
    }
    ~Demo(){
        cout<<"Object destroyed!"<<endl;
    }
};
int main(){
    cout<<"Program start"<<endl;
    Demo d;
    cout<<"Program end"<<endl;
    return 0;
}