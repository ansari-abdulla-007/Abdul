#include <iostream>
using namespace std;
class my_self{
    private:
    string name;
    public:
    void set_name(){
       name="Abdulla";
    }
    public:
    void show_name(){
        cout<<name<<endl;
    }
};
int main(){
    my_self s1;
    s1.set_name();
    s1.show_name();

    return 0;
}