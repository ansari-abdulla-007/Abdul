// create a class teacher and print subject.
#include <iostream>
using namespace std;
class teacher{
    public:
    string name;
    string sub;
    void showteacher(){
        name="vishaka parmar";
        sub="c++";
        cout<<"Name: "<<name<<endl;
        cout<<"Subject: "<<sub<<endl;
    }
};
int main(){
    teacher t1;
    t1.showteacher();
    return 0;
}