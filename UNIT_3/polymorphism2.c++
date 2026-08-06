#include <iostream>
using namespace std;
class Add{
    public:
    void sum(int a,int b){
        cout<<"Addition = "<<a+b<<endl;
    }
    void sum(int a,int b,int c){
        cout<<"Addition = "<<a+b+c<<endl;
    }
};
int main(){
    Add obj;
    obj.sum(10,20);
    obj.sum(10,20,30);
    return 0;
}