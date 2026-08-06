//write a program showing data hiding.
#include <iostream>
using namespace std;
class myself{
    private:
    string name;
    public:
    void setname(){
        name="Abduu";
    }
    void showname(){
        cout<<"name: "<<name<<endl;
    }
};
int main(){
    myself s1;
    s1.setname();
    s1.showname();
    
    return 0;
}